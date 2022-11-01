using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnitySceneManager = UnityEngine.SceneManagement.SceneManager;

public class Task1 : MonoBehaviour
{
    // Start is called before the first frame update

    // public GameObject MirrorObject;
    public static int CurrentChoose = 0;
    public static int NextChoose = 0;

    public static int Repetition = 0;

    [SerializeField]
    private Boolean isSingle;

    private float raduis = 0.3f;
    Color targetColor = Color.red;

    void Start()
    {   
        MenuSelection.propertiesClass.TaskNumber = 1;
        MenuSelection.propertiesClass.MirrorPosSetting = true;
        targetColor.a = .3f;
    }

    
    public void SetupObjects () {
        this.transform.localPosition = GameObject.Find("VirtualMirror").transform.position;
        MenuSelection.propertiesClass.MirrorPosSetting = true;
         for (int i = 0; i < 11; i++) {
            float angle = i * Mathf.PI *2f / 11;
            Vector3 mirrorPos = GameObject.Find("VirtualMirror").transform.position;
            Vector3 sepherePos = new Vector3(Mathf.Sin(angle)*0.3f, Mathf.Cos(angle) * 0.3f, -1f);

            this.transform.GetChild(0).GetChild(i).transform.position += sepherePos;
            this.transform.GetChild(0).GetChild(i).GetComponent<ObjectFlip>().FlipAndMimic();
            this.transform.GetChild(0).gameObject.SetActive(false);
            this.transform.GetChild(1).gameObject.SetActive(false);
            this.transform.GetChild(0).GetChild(i).gameObject.GetComponent<Collider>().enabled = true;
            this.transform.GetChild(1).GetChild(i).gameObject.GetComponent<Collider>().enabled = true;

        }
    }


    public void ActiveObjects() {
        Debug.Log("initialize");
        CurrentChoose = 0;
        NextChoose = 0;
        Repetition = 0;
        Color defaultColor = Color.green;
        defaultColor.a = 0.3f;
        for (int i = 0; i < 11; i++) {
            this.transform.GetChild(0).GetChild(i).gameObject.SetActive(true);
            this.transform.GetChild(1).GetChild(i).gameObject.SetActive(true);
            this.transform.GetChild(0).GetChild(i).gameObject.GetComponent<MeshRenderer>().material.SetColor("_Color", defaultColor);
            this.transform.GetChild(1).GetChild(i).gameObject.GetComponent<MeshRenderer>().material.SetColor("_Color", defaultColor);
            this.transform.GetChild(0).GetChild(i).gameObject.GetComponent<Collider>().enabled = true;
            this.transform.GetChild(1).GetChild(i).gameObject.GetComponent<Collider>().enabled = true;
        }
    }

    void DisableCurrentTask() {
        string childName = "GameObject/HandMenuContent/"+ MenuSelection.propertiesClass.SubTask.ToString();
        Debug.Log("Disable" + childName);
        if (GameObject.Find(childName) != null) {
            Destroy(GameObject.Find(childName));   
        }
        this.transform.GetChild(0).gameObject?.SetActive(false);
        this.transform.GetChild(1).gameObject?.SetActive(false);
    }


    // Update is called once per frame
    void Update()
    {
        if(CurrentChoose == 0) {
            this.transform.GetChild(0).GetChild(CurrentChoose).GetComponent<MeshRenderer>().material.SetColor("_Color", targetColor);
            this.transform.GetChild(1).GetChild(CurrentChoose).GetComponent<MeshRenderer>().material.SetColor("_Color", targetColor);
        }

        if (Repetition == 2) {
            this.DisableCurrentTask();
        }
    }
}
