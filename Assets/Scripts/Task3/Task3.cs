using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnitySceneManager = UnityEngine.SceneManagement.SceneManager;
public class Task3 : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject Line;
    public static bool isDrawStart;

    public static string RenderTime;

    public static int Repetition = 0;
    public static bool isManual;

    public static bool isTouched;

    void Start()
    {
        MenuSelection.propertiesClass.Modality = false;
        MenuSelection.propertiesClass.Perspective = true;
        MenuSelection.propertiesClass.Visibility = true;
        MenuSelection.propertiesClass.TaskNumber = 3;
        this.transform.localPosition = GameObject.Find("VirtualMirror").transform.position;
        var mirrorPos = GameObject.Find("VirtualMirror").transform.position;
        isManual = false;

        this.transform.GetChild(0).transform.position = new Vector3(0f, -0.05f, mirrorPos.z - 0.9f);
        // this.DrawSineWave(new Vector3(0f,0f,0f), 1f,2f);
    }

    void OnEnable()
    {
        UnitySceneManager.sceneLoaded += OnSceneLoaded;
    }

    void OnDisable()
    {
        UnitySceneManager.sceneLoaded -= OnSceneLoaded;
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        MenuSelection.propertiesClass.Modality = false;
        MenuSelection.propertiesClass.Perspective = true;
        MenuSelection.propertiesClass.Visibility = true;
        MenuSelection.propertiesClass.TaskNumber = 3;
        Repetition = 0;
        this.transform.localPosition = GameObject.Find("VirtualMirror").transform.position;
        var mirrorPos = GameObject.Find("VirtualMirror").transform.position;
        isManual = false;
        this.transform.GetChild(0).transform.position = new Vector3(0f, -0.05f, mirrorPos.z - 0.9f);
    }

    // Update is called once per frame
    void Update()
    {
        if (Repetition >= 3)
        {
            if (MenuSelection.propertiesClass.Perspective == true && MenuSelection.propertiesClass.Modality == true)
            {
                Repetition = 0;
                if (GameObject.Find("T3_2") != null)
                {
                    Destroy(GameObject.Find("T3_2"));
                }
            }
            else if (MenuSelection.propertiesClass.Perspective == true && MenuSelection.propertiesClass.Modality == false)
            {
                Repetition = 0;
                if (GameObject.Find("T3_1") != null)
                {
                    Destroy(GameObject.Find("T3_1"));
                }
            }
            else if (MenuSelection.propertiesClass.Perspective == false && MenuSelection.propertiesClass.Modality == true)
            {
                Repetition = 0;
                if (GameObject.Find("T3_4") != null)
                {
                    Destroy(GameObject.Find("T3_4"));
                }
            }
            else if (MenuSelection.propertiesClass.Perspective == false && MenuSelection.propertiesClass.Modality == false)
            {
                Repetition = 0;
                if (GameObject.Find("T3_3") != null)
                {
                    Destroy(GameObject.Find("T3_3"));
                }
            }
        }


    }
}
