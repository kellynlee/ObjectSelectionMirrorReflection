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
    void Start()
    {
        MenuSelection.propertiesClass.Modality = false;
        MenuSelection.propertiesClass.Perspective = true;
        MenuSelection.propertiesClass.Visibility = true;
        MenuSelection.propertiesClass.TaskNumber = 3;
        this.transform.localPosition = GameObject.Find("VirtualMirror").transform.position;
        var mirrorPos = GameObject.Find("VirtualMirror").transform.position;
        this.transform.GetChild(0).transform.position = new Vector3(0,0,mirrorPos.z - 0.5f);
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
        this.transform.localPosition = GameObject.Find("VirtualMirror").transform.position;
        var mirrorPos = GameObject.Find("VirtualMirror").transform.position;
        this.transform.GetChild(0).transform.position = new Vector3(0,0,mirrorPos.z - 0.5f);
        
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(MenuSelection.propertiesClass.Perspective);
        if (MenuSelection.propertiesClass.Visibility)
        {
            //double
            this.transform.GetChild(0).gameObject.SetActive(true);
            this.transform.GetChild(1).gameObject.SetActive(true);
        }
        else
        {
            //1pp
            this.transform.GetChild(0).gameObject.SetActive(true);
            this.transform.GetChild(1).gameObject.SetActive(false);

        }

    }
}
