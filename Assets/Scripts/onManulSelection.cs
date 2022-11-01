using System.Threading.Tasks;
using System.Reflection.Emit;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class onManulSelection : MonoBehaviour
{
    // Start is called before the first frame update

    private int layerMask;

    private int choose;

    [SerializeField]
    private AudioSource audioSourceFalse;

    [SerializeField]

    private GameObject DrawPath;

    private GameObject Drawing;

    private LineRenderer DrawPathRenderer;

    public bool firstEnter;

    private string firstTime;


    private GameObject colliderObj;
    void Start()
    {

        this.firstTime = "";
        if (MenuSelection.propertiesClass.Perspective)
        {
            //1pp
            this.layerMask = LayerMask.GetMask("Real");
        }
        else
        {
            //2pp
            this.layerMask = LayerMask.GetMask("Mirror");
        }
    }
    void FreeDraw(LineRenderer lr, Vector3 position)
    {
        lr.startColor = Color.cyan;
        lr.endColor = Color.cyan;
        Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10f);
        lr.positionCount++;
        lr.SetPosition(lr.positionCount - 1, position);
    }
    void OnCollisionEnter(Collision collision)
    {
        ContactPoint contact = collision.GetContact(collision.contactCount - 1);
        colliderObj = collision.gameObject;
        Debug.Log(colliderObj.tag);
        if (colliderObj.tag == "T1Object")
        {
            Int32.TryParse(colliderObj.name, out choose);
            if (Task1.CurrentChoose == 0 && Task1.NextChoose == 0)
            {
                if (choose == 1)
                {
                    Task1.CurrentChoose = choose;
                    Task1.NextChoose = choose + 6;
                    var distance = Vector3.Distance(new Vector3(0f, 0f, 0f), colliderObj.transform.InverseTransformPoint(contact.point));
                    var time = MenuSelection.StopTimer();
                    Debug.Log("distance is:" + distance + ", time is:" + time);
                    Debug.Log("Current round:" + Task1.Repetition.ToString());
                    DataLogger.Logger12(DataLogger.participantNum, MenuSelection.propertiesClass.TaskNumber, MenuSelection.propertiesClass.SubTask, Task1.Repetition + 1, time, colliderObj.transform.position, contact.point, distance);
                    MenuSelection.StartTimer();
                    return;
                }
            }
            else
            {
                if (choose == Task1.NextChoose)
                {
                    var distance = Vector3.Distance(new Vector3(0f, 0f, 0f), colliderObj.transform.InverseTransformPoint(contact.point));
                    var time = MenuSelection.StopTimer();
                    if (Task1.CurrentChoose == 11 && choose == 6)
                    {
                        if (Task1.Repetition < 3)
                        {
                            Debug.Log("distance is:" + distance + ", time is:" + time);
                            Task1.CurrentChoose = 0;
                            Task1.NextChoose = 0;
                            MenuSelection.StartTimer();
                            Debug.Log("Current round:" + Task1.Repetition.ToString());
                            DataLogger.Logger12(DataLogger.participantNum, MenuSelection.propertiesClass.TaskNumber, MenuSelection.propertiesClass.SubTask, Task1.Repetition + 1, time, colliderObj.transform.position, contact.point, distance);
                            Task1.Repetition += 1;
                            return;
                        }
                        else
                        {
                            Debug.Log("distance is:" + distance + ", time is:" + time);
                            Task1.CurrentChoose = choose;
                            Task1.NextChoose = choose;
                            Debug.Log("All round finished!");
                            Debug.Log("Current round:" + Task1.Repetition.ToString());

                            DataLogger.Logger12(DataLogger.participantNum, MenuSelection.propertiesClass.TaskNumber, MenuSelection.propertiesClass.SubTask, Task1.Repetition, time, colliderObj.transform.position, contact.point, distance);
                            return;
                        }
                    }
                    else
                    {
                        Debug.Log("distance is:" + distance + ", time is:" + time);
                        Task1.NextChoose = Task1.CurrentChoose + 1;
                        Task1.CurrentChoose = choose;
                        MenuSelection.StartTimer();
                        Debug.Log("Current round:" + Task1.Repetition.ToString());

                        DataLogger.Logger12(DataLogger.participantNum, MenuSelection.propertiesClass.TaskNumber, MenuSelection.propertiesClass.SubTask, Task1.Repetition + 1, time, colliderObj.transform.position, contact.point, distance);
                        return;
                    }
                }
            }
        }
        else if (colliderObj.tag == "T2Object")
        {
            //Disable touch interaction for Task2
            // colliderObj.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.red);
            // Task2.targetNum = -1;
            // var time = MenuSelection.StopTimer();
            // Debug.Log("time is:" + time);
            // DataLogger.Logger12(MenuSelection.propertiesClass.TaskNumber, MenuSelection.propertiesClass.SubTask, Task2.Repetition == 0? 10 : Task2.Repetition,time, colliderObj.transform.position, contact.point, 0f);
        }
        else if (colliderObj.tag == "T3Object")
        {
            if (colliderObj.name == "StartPoint") {
                    if (!Task3.isTouched) {
                    Task3.isTouched = true;
                }
                colliderObj.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.blue);
            }
            if (colliderObj.name == "EndPoint") {
                GameObject.Find("Cursor").GetComponent<HandBehaviour>().StopDrawing();
                colliderObj.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.blue);
            }
        }
    }
}


