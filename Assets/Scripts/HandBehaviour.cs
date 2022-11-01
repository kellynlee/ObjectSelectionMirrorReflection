using System.Reflection.Emit;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using TMPro;
public class HandBehaviour : MonoBehaviour
{
    public GameObject handPrefab;
    // public GameObject flippedHandObj;
    public GameObject flippedHandPrefab;

    public GameObject lineObj;

    [SerializeField]
    private AudioSource audioSourceFalse;

    [SerializeField]
    private GameObject cursorPrefab;

    private GameObject mirrorObj, HandRay, direction, flippedDirection, handObj, flippedHandObj, endCursor;

    private MixedRealityPose pose;

    [SerializeField]

    private GameObject DrawPath;

    private GameObject Drawing;

    private LineRenderer DrawPathRenderer;
    private int layer_mask;

    private float rayDistance;
    private int choose;
    private const float PinchThreshold = 0.7f;

    private bool startDraw;
    private GameObject EndCursor;

    private string DrawTime;

    private bool updateRep = false;

    // Start is called before the first frame update
    void Start()
    {
        handObj = Instantiate(handPrefab, this.transform);
        flippedHandObj = Instantiate(flippedHandPrefab, this.transform);
        mirrorObj = GameObject.Find("VirtualMirror");
        HandRay = Instantiate(lineObj, this.transform);
        direction = new GameObject();
        flippedDirection = new GameObject();
        endCursor = Instantiate(cursorPrefab, this.transform);
        endCursor.SetActive(false);
        DrawTime = "";
        this.Drawing = Instantiate(DrawPath);
        this.Drawing.SetActive(false);
        this.rayDistance = -1;
        //disable gaze pointer
        PointerUtils.SetGazePointerBehavior(PointerBehavior.AlwaysOff);
        PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOff);
    }

    public void FlipAndMimic(GameObject targetObj, ref GameObject flippedObj)
    {
        Vector3 flippedLocalPos = mirrorObj.transform.InverseTransformPoint(targetObj.transform.position);
        Vector3 updatedLocalPos = flippedLocalPos;
        updatedLocalPos.y *= -1;

        flippedObj.transform.position = mirrorObj.transform.TransformPoint(updatedLocalPos);

        //mimic rotation
        // inspired from:
        // https://forum.unity.com/threads/how-to-mirror-a-euler-angle-or-rotation.90650/
        // http://www.euclideanspace.com/maths/geometry/affine/reflection/quaternion/index.htm
        //Quaternion flippedGlobalRot = this.flippedObj.transform.rotation;
        MeshFilter mirrorPlane = mirrorObj.GetComponent<MeshFilter>();
        Vector3 mirrorNormal = mirrorPlane.transform.TransformDirection(mirrorPlane.mesh.normals[0]);
        //Quaternion mirrorQuat = new Quaternion(mirrorNormal.x, mirrorNormal.y, mirrorNormal.z, 0);

        //this.transform.rotation = mirrorQuat * flippedGlobalRot * new Quaternion(-mirrorQuat.x, -mirrorQuat.y, -mirrorQuat.z, mirrorQuat.w);

        Vector3 forward = targetObj.transform.forward;
        Vector3 upward = targetObj.transform.up;
        Vector3 mirroredFor = Vector3.Reflect(-forward, mirrorNormal);
        Vector3 mirroredUp = Vector3.Reflect(upward, mirrorNormal);
        //setting flipped object's position and render
        flippedObj.transform.rotation = Quaternion.LookRotation(mirroredFor, mirroredUp);
        //Vector3 rot = this.flippedObj.transform.rotation.eulerAngles;
        //rot = new Vector3(rot.x, rot.y *-1, -1* rot.z);
        //this.transform.rotation = Quaternion.Euler(rot);
        //this.transform.rotation = this.flippedObj.transform.rotation;
    }


    void FreeDraw(LineRenderer lr, Vector3 position)
    {
        lr.startColor = Color.cyan;
        lr.endColor = Color.cyan;
        Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10f);
        lr.positionCount++;
        lr.SetPosition(lr.positionCount - 1, position);
    }

    public void DestroyPath()
    {
        if (this.DrawPathRenderer != null)
        {
            Task3.isManual = false;
            this.DrawPathRenderer.positionCount = 0;
            this.Drawing.SetActive(false);
            Task3.isDrawStart = false;
        }
    }
    void DrawLine(Vector3 start, Vector3 end, int layerMask)
    {
        HandRay.transform.position = start;
        HandRay.GetComponent<LineRenderer>().SetPosition(0, start);
        Debug.DrawRay(start, (end - start).normalized, Color.red);
        if (MenuSelection.propertiesClass.TaskNumber != 3)
        {
            if (Physics.Raycast(start, (end - start).normalized, out RaycastHit hit, Mathf.Infinity, layerMask))
            {
                HandRay.GetComponent<LineRenderer>().SetPosition(1, hit.point);
                if (this.IsPinching(Handedness.Right))
                {
                    this.InteractionWithObject(hit.transform.gameObject, MenuSelection.propertiesClass.TaskNumber, hit);
                }
                else
                {
                    this.endCursor.SetActive(false);
                }
            }
            else
            {
                HandRay.GetComponent<LineRenderer>().SetPosition(1, end);
            }
        }
        else
        {
            if (Physics.Raycast(start, (end - start).normalized, out RaycastHit hit, this.rayDistance == -1 ? Mathf.Infinity : this.rayDistance, layerMask))
            {
                if (this.IsPinching(Handedness.Right))
                {
                    if (hit.transform.gameObject.name == "StartPoint")
                    {
                        this.rayDistance = Vector3.Distance(start, hit.point);
                        Debug.Log("start drawing");
                        Task3.isDrawStart = true;
                        GameObject.Find("StartPoint").GetComponent<MeshRenderer>().material.SetColor("_Color", Color.blue);
                        this.DrawTime = DateTime.Now.ToString("yyyyMMddHHmmssffff");
                        HandRay.GetComponent<LineRenderer>().SetPosition(1, hit.point);
                        this.DrawPathRenderer = Drawing.GetComponent<LineRenderer>();
                        this.DrawPathRenderer.SetPosition(0, hit.point);
                    }
                    if (hit.transform.gameObject.name == "EndPoint")
                    {
                        Debug.Log("end drawing");
                        Task3.isDrawStart = false;
                        this.rayDistance = -1;
                        this.endCursor.SetActive(false);
                        GameObject.Find("EndPoint").GetComponent<MeshRenderer>().material.SetColor("_Color", Color.blue);
                        DataLogger.Logger3(DataLogger.participantNum, MenuSelection.propertiesClass.SubTask, Task3.Repetition == 0 ? 3 : Task3.Repetition, Task3.RenderTime, this.DrawTime, DateTime.Now.ToString("yyyyMMddHHmmssffff"), hit.point);
                    }
                }
            }

            var endPoint = this.rayDistance == -1 ? end : start + (end - start).normalized * this.rayDistance;
            HandRay.GetComponent<LineRenderer>().SetPosition(1, endPoint);
            
            if (this.IsPinching(Handedness.Right) && Task3.isDrawStart)
            {
                this.endCursor.transform.position = endPoint;
                this.endCursor.SetActive(true);
                this.Drawing.SetActive(true);

                this.DrawPathRenderer = Drawing.GetComponent<LineRenderer>();
                this.FreeDraw(this.DrawPathRenderer, endPoint);
                DataLogger.Logger3(DataLogger.participantNum, MenuSelection.propertiesClass.SubTask, Task3.Repetition == 0 ? 3 : Task3.Repetition, Task3.RenderTime, this.DrawTime, DateTime.Now.ToString("yyyyMMddHHmmssffff"), endPoint);
            }
            else
            {
                this.endCursor.SetActive(false);
            }
        }


        HandRay.GetComponent<LineRenderer>().enabled = true;

    }

    void HandDraw(Transform tipTransform, Vector3 lineEndPoint)
    {
        if (Task3.isDrawStart != true)
        {
            Debug.Log("start drawing");
            Task3.isDrawStart = true;
            this.DrawTime = DateTime.Now.ToString("yyyyMMddHHmmssffff");
            // this.Drawing = Instantiate(DrawPath, tipTransform);
            this.DrawPathRenderer = Drawing.GetComponent<LineRenderer>();
            this.DrawPathRenderer.SetPosition(0, tipTransform.position);
        }
        this.Drawing.SetActive(true);
        this.DrawPathRenderer = Drawing.GetComponent<LineRenderer>();

        this.FreeDraw(this.DrawPathRenderer, tipTransform.position);
        DataLogger.Logger3(DataLogger.participantNum, MenuSelection.propertiesClass.SubTask, Task3.Repetition == 0 ? 3 : Task3.Repetition, Task3.RenderTime, this.DrawTime, DateTime.Now.ToString("yyyyMMddHHmmssffff"), tipTransform.position);
    }

    public void StopDrawing()
    {
        Task3.isDrawStart = false;
        Task3.isManual = false;
        Task3.isTouched = false;
    }
    bool IsPinching(Handedness trackedHand)
    {
        return HandPoseUtils.CalculateIndexPinch(trackedHand) > PinchThreshold;
    }

    void InteractionWithObject(GameObject hitObject, int taskNumber, RaycastHit hit)
    {
        switch (taskNumber)
        {
            case 1:
                {
                    if (hitObject.tag == "T1Object")
                    {
                        Int32.TryParse(hitObject.name, out choose);
                        if (Task1.CurrentChoose == 0 && Task1.NextChoose == 0)
                        {
                            if (choose == 1)
                            {
                                Task1.CurrentChoose = choose;
                                Task1.NextChoose = choose + 6;
                                var distance = Vector3.Distance(new Vector3(0f, 0f, 0f), hit.transform.InverseTransformPoint(hit.point));
                                var time = MenuSelection.StopTimer();
                                Debug.Log("distance is:" + distance + ", time is:" + time);
                                MenuSelection.StartTimer();
                                DataLogger.Logger12(DataLogger.participantNum, MenuSelection.propertiesClass.TaskNumber, MenuSelection.propertiesClass.SubTask, Task1.Repetition + 1, time, hit.transform.position, hit.point, distance);
                                return;
                            }
                        }
                        else
                        {
                            if (choose == Task1.NextChoose)
                            {
                                var distance = Vector3.Distance(new Vector3(0f, 0f, 0f), hit.transform.InverseTransformPoint(hit.point));
                                var time = MenuSelection.StopTimer();
                                if (Task1.CurrentChoose == 11 && choose == 6)
                                {
                                    if (Task1.Repetition < 3)
                                    {
                                        Debug.Log("distance is:" + distance + ", time is:" + time);
                                        Task1.CurrentChoose = 0;
                                        Task1.NextChoose = 0;
                                        MenuSelection.StartTimer();
                                        DataLogger.Logger12(DataLogger.participantNum, MenuSelection.propertiesClass.TaskNumber, MenuSelection.propertiesClass.SubTask, Task1.Repetition + 1, time, hit.transform.position, hit.point, distance);
                                        Task1.Repetition += 1;

                                        return;
                                    }
                                    else
                                    {
                                        Debug.Log("distance is:" + distance + ", time is:" + time);
                                        Task1.CurrentChoose = choose;
                                        Task1.NextChoose = choose;
                                        Debug.Log("All round finished!");
                                        DataLogger.Logger12(DataLogger.participantNum, MenuSelection.propertiesClass.TaskNumber, MenuSelection.propertiesClass.SubTask, Task1.Repetition, time, hit.transform.position, hit.point, distance);
                                        return;
                                    }
                                }
                                else
                                {
                                    Debug.Log("distance is:" + distance + ", time is:" + time);
                                    Task1.NextChoose = Task1.CurrentChoose + 1;
                                    Task1.CurrentChoose = choose;
                                    MenuSelection.StartTimer();

                                    DataLogger.Logger12(DataLogger.participantNum, MenuSelection.propertiesClass.TaskNumber, MenuSelection.propertiesClass.SubTask, Task1.Repetition + 1, time, hit.transform.position, hit.point, distance);
                                    return;
                                }
                            }
                        }
                    }
                    break;
                }
            case 2:
                {
                    if (hitObject.tag == "T2Object")
                    {
                        if (hitObject.transform.GetSiblingIndex() == Task2.targetNum)
                        {
                            Debug.Log("right");
                            hitObject.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.red);
                            Task2.targetNum = -1;
                            var time = MenuSelection.StopTimer();
                            Task2.Repetition += 1;
                            Debug.Log("time is:" + time);
                            DataLogger.Logger12(DataLogger.participantNum, MenuSelection.propertiesClass.TaskNumber, MenuSelection.propertiesClass.SubTask, Task2.Repetition == 0 ? 5 : Task2.Repetition, time, hit.transform.position, hit.point, 0f);
                            return;
                        }
                    }
                    break;
                }
            case 3:
                {

                    break;
                }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (MenuSelection.propertiesClass.Perspective)
        {
            //1pp
            this.layer_mask = LayerMask.GetMask("Real");
        }
        else
        {
            //2pp
            this.layer_mask = LayerMask.GetMask("Mirror");
        }
        this.handObj.GetComponent<Renderer>().enabled = false;
        this.flippedHandObj.GetComponent<Renderer>().enabled = false;
        this.HandRay.GetComponent<LineRenderer>().enabled = false;

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
        {
            this.handObj.transform.position = pose.Position;
            this.FlipAndMimic(handObj, ref flippedHandObj);
            if (MenuSelection.propertiesClass.Perspective)
            {
                //1pp
                this.handObj.GetComponent<Renderer>().enabled = true;
                if (MenuSelection.propertiesClass.TaskNumber == 3)
                {
                    // if (Task3.isManual == true)
                    // {
                    if (Task3.isTouched == true)
                    {
                        this.HandDraw(this.handObj.transform, GameObject.Find("Line").GetComponent<DrawLine>().endPosition);
                    }
                    // }

                }
                if (MenuSelection.propertiesClass.Modality)
                {
                    this.HandRay.GetComponent<LineRenderer>().enabled = false;
                }
                else
                {
                    //remote
                    // inspired from https://stackoverflow.com/questions/56067810/how-do-i-get-the-position-of-an-active-mrtk-pointer
                    foreach (var source in MixedRealityToolkit.InputSystem.DetectedInputSources)
                    {
                        // Ignore anything that is not a hand because we want articulated hands
                        if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
                        {
                            foreach (var p in source.Pointers)
                            {
                                if (p is IMixedRealityNearPointer)
                                {
                                    continue;
                                }
                                if ((p is ShellHandRayPointer) || (p is LinePointer))
                                {
                                    var startPoint = p.Position;
                                    var endPoint = startPoint + p.Rotation * Vector3.forward * 10;
                                    this.DrawLine(startPoint, endPoint, this.layer_mask);
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                this.flippedHandObj.GetComponent<Renderer>().enabled = true;
                if (MenuSelection.propertiesClass.TaskNumber == 3)
                {
                    // if (Task3.isManual == true)
                    // {
                    if (Task3.isTouched == true)
                    {
                        this.HandDraw(this.flippedHandObj.transform, GameObject.Find("Line (1)").GetComponent<DrawLine>().endPosition);
                    }
                    // }
                }
                //2pp
                if (MenuSelection.propertiesClass.Modality)
                {
                    this.HandRay.GetComponent<LineRenderer>().enabled = false;
                }
                else
                {
                    //remote
                    // inspired from https://stackoverflow.com/questions/56067810/how-do-i-get-the-position-of-an-active-mrtk-pointer
                    foreach (var source in MixedRealityToolkit.InputSystem.DetectedInputSources)
                    {
                        // Ignore anything that is not a hand because we want articulated hands
                        if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
                        {
                            foreach (var p in source.Pointers)
                            {
                                if (p is IMixedRealityNearPointer)
                                {
                                    continue;
                                }
                                if ((p is ShellHandRayPointer) || (p is LinePointer))
                                {
                                    var startPoint = p.Position;
                                    var endPoint = startPoint + p.Rotation * Vector3.forward * 10;
                                    this.direction.transform.position = endPoint;
                                    this.FlipAndMimic(direction, ref flippedDirection);
                                    this.DrawLine(flippedHandObj.transform.position, flippedDirection.transform.position, this.layer_mask);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
