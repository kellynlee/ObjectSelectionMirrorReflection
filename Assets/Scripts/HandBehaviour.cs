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


    private GameObject mirrorObj, HandRay, direction,flippedDirection, handObj, flippedHandObj;

    private MixedRealityPose pose;
    private int layer_mask;

    private int choose;
    private const float PinchThreshold = 0.7f;


    // Start is called before the first frame update
    void Start()
    {
        handObj = Instantiate(handPrefab, this.transform);
        flippedHandObj = Instantiate(flippedHandPrefab, this.transform);
        mirrorObj = GameObject.Find("VirtualMirror");
        HandRay = Instantiate(lineObj, this.transform);
        direction = new GameObject();
        flippedDirection = new GameObject(); 
        //disable gaze pointer
        PointerUtils.SetGazePointerBehavior(PointerBehavior.AlwaysOff);
        PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOff);  
    }

    public void FlipAndMimic(GameObject targetObj, ref GameObject flippedObj) {
        Vector3 flippedLocalPos = mirrorObj.transform.InverseTransformPoint(targetObj.transform.position);
        Vector3 updatedLocalPos = flippedLocalPos;
        updatedLocalPos.z *= -1;

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
        Vector3 mirroredFor = Vector3.Reflect(forward, mirrorNormal);
        Vector3 mirroredUp = Vector3.Reflect(upward, mirrorNormal);
        //setting flipped object's position and render
        flippedObj.transform.rotation = Quaternion.LookRotation(mirroredFor, mirroredUp);
        //Vector3 rot = this.flippedObj.transform.rotation.eulerAngles;
        //rot = new Vector3(rot.x, rot.y *-1, -1* rot.z);
        //this.transform.rotation = Quaternion.Euler(rot);
        //this.transform.rotation = this.flippedObj.transform.rotation;
    }

    void DrawLine (Vector3 start, Vector3 end, int layerMask) {
        HandRay.transform.position = start;
        HandRay.GetComponent<LineRenderer>().SetPosition(0, start);
        Debug.DrawRay(start, (end - start).normalized,Color.red);
        if (Physics.Raycast(start, (end - start).normalized, out RaycastHit hit, Mathf.Infinity, layerMask)) {
            Debug.Log("hit");
            HandRay.GetComponent<LineRenderer>().SetPosition(1, hit.point);
            if(this.IsPinching(Handedness.Right)){
                var distance = Vector3.Distance(hit.transform.position, hit.point);
                this.InteractionWithObject(hit.transform.gameObject, 1, distance);
            }
        } else {
            HandRay.GetComponent<LineRenderer>().SetPosition(1, end);
        }

        HandRay.GetComponent<LineRenderer>().startColor = Color.yellow;
        HandRay.GetComponent<LineRenderer>().endColor = Color.yellow;
        
        HandRay.GetComponent<LineRenderer>().enabled = true;
    }

    bool IsPinching(Handedness trackedHand)
    {
        return HandPoseUtils.CalculateIndexPinch(trackedHand) > PinchThreshold;
    }

    void InteractionWithObject(GameObject hitObject, int taskNumber, float distance) {
        switch(taskNumber)
        {
            case 1:
            {
                if (hitObject.tag == "T1Object") {
                    Int32.TryParse(hitObject.name,out choose);
                    if (Task1.CurrentChoose ==0 && Task1.NextChoose == 0) {
                    if (choose == 1) {
                        Task1.CurrentChoose = choose;
                        Task1.NextChoose = choose+ 6;
                    } else {
                        // audioSourceFalse.Play();
                        
                    }
                } else {
                    if (choose == Task1.NextChoose) {
                        Task1.NextChoose = Task1.CurrentChoose+1;
                        Task1.CurrentChoose = choose; 
                    } else {
                        // audioSourceFalse.Play();
                    }
                    if (Task1.CurrentChoose == 11 && choose == 6) {
                        Task1.CurrentChoose = choose;
                        Task1.NextChoose = choose;
                    }
                }
                }
                break;
            }
            case 2:
            {
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
        if(MenuSelection.propertiesClass.Perspective) {
            //1pp
            this.layer_mask = LayerMask.GetMask("Real");
        } else {
            //2pp
            this.layer_mask = LayerMask.GetMask("Mirror");
        }
        this.handObj.GetComponent<Renderer>().enabled = false;
        this.HandRay.GetComponent<LineRenderer>().enabled = false;
        if(HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose)) {
            this.handObj.transform.position = pose.Position;
            this.handObj.GetComponent<Renderer>().enabled = true;
            this.FlipAndMimic(handObj,ref flippedHandObj);
            this.flippedHandObj.GetComponent<Renderer>().enabled = true;
            if (MenuSelection.propertiesClass.Modality) {
                //manual
                this.HandRay.GetComponent<LineRenderer>().enabled = false; 
            } else {
                //remote
                // inspired from https://stackoverflow.com/questions/56067810/how-do-i-get-the-position-of-an-active-mrtk-pointer
                foreach(var source in MixedRealityToolkit.InputSystem.DetectedInputSources)
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
                            if ((p is ShellHandRayPointer) || ( p is LinePointer) ) {
                                var startPoint = p.Position;
                                var endPoint = startPoint + p.Rotation * Vector3.forward * 10;
                                this.direction.transform.position = endPoint;
                                this.FlipAndMimic(direction, ref flippedDirection);
                                if(MenuSelection.propertiesClass.Perspective) {
                                    //1pp
                                    this.DrawLine(startPoint, endPoint, layer_mask);
                                } else {
                                    //2pp
                                    this.DrawLine(flippedHandObj.transform.position, flippedDirection.transform.position, layer_mask);
                                }
                            }
                        }
                    }
                }
            }
        }
    } 
}
