using System;
using UnityEngine;
using System.Collections;
using TMPro;
using UnityEngine.SceneManagement;
using UnitySceneManager = UnityEngine.SceneManagement.SceneManager;
public class MenuSelection : MonoBehaviour 
{
    public static TaskProperties propertiesClass;

    private TextMeshPro TaskInformation;
 
    void Start()
    {

        propertiesClass = new TaskProperties();
        Debug.Log(propertiesClass);
        this.TaskInformation = GameObject.Find("Information").GetComponent<TextMeshPro>();

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

       propertiesClass = new TaskProperties();
        Debug.Log(propertiesClass);

        this.TaskInformation = GameObject.Find("Information").GetComponent<TextMeshPro>();
    }
    public void TaskT1_1() {
        Debug.Log("Task1: 1pp/manual/single");
        this.TaskInformation.text = "Task1.A:  1pp/manual/single";
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = true;
        propertiesClass.Modality = true;
        propertiesClass.Visibility = false;
    }

    public void TaskT1_2() {
        Debug.Log("Task1.2: 1pp/manual/double");
        this.TaskInformation.text = "Task1.B:  1pp/manual/double";
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = true;
        propertiesClass.Modality = true;
        propertiesClass.Visibility = true;
    }

    public void TaskT1_3() {
        Debug.Log("Task1.3: 1pp/remote/single");
        this.TaskInformation.text = "Task1.C: 1pp/remote/single";
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = true;
        propertiesClass.Modality = false;
        propertiesClass.Visibility = false;
    }

    public void TaskT1_4() {
        Debug.Log("Task1.4: 1pp/remote/double");
        this.TaskInformation.text = "Task1.D: 1pp/remote/double";
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = true;
        propertiesClass.Modality = false;
        propertiesClass.Visibility = true;
    }

    public void TaskT1_5() {
        Debug.Log("Task1.5: 2pp/manual/single");
        this.TaskInformation.text = "Task1.E: 2pp/manual/single";
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = false;
        propertiesClass.Modality = true;
        propertiesClass.Visibility = false;
    }
    public void TaskT1_6() {
        Debug.Log("Task1.6: 2pp/manual/double");
        this.TaskInformation.text = "Task1.F: 2pp/manual/double";
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = false;
        propertiesClass.Modality = true;
        propertiesClass.Visibility = true;
    }
    public void TaskT1_7() {
        Debug.Log("Task1.7: 2pp/remote/single");
        this.TaskInformation.text = "Task1.G: 2pp/remote/single";
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = false;
        propertiesClass.Modality = false;
        propertiesClass.Visibility = false;
    }
    public void TaskT1_8() {
        Debug.Log("Task1.8: 2pp/remote/double");
        this.TaskInformation.text = "Task1.H: 2pp/remote/double";
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = false;
        propertiesClass.Modality = false;
        propertiesClass.Visibility = true;
    }

    public void SetTask1Position () {
        MenuSelection.propertiesClass.TaskNumber = 1;
        GameObject.Find("Task1").GetComponent<Task1>().SetupObjects();
        this.TaskInformation.text = "Task1 Ready";
        GameObject.Find("SetPosition").SetActive(false);
    }


public void TaskT2_1() {
        Debug.Log("Task2.A: With Reflection");
        this.TaskInformation.text = "Task2.A: With Reflection";
        // Task1.CurrentChoose = 0;
        Task2.targetNum = UnityEngine.Random.Range(0,20);
        Debug.Log(Task2.targetNum);
        propertiesClass.Visibility = true;
    }
    public void TaskT2_2() {
        Debug.Log("Task2.A: Without Reflection");
        this.TaskInformation.text = "Task2.A: Without Reflection";
        Task2.targetNum = UnityEngine.Random.Range(0,20);
        Debug.Log(Task2.targetNum);

        propertiesClass.Visibility = false;
    }

    public void TaskT3_1() {
        Debug.Log("Task3.A: With Reflection");
        this.TaskInformation.text = "Task3.A: With Reflection";

        propertiesClass.Visibility = true;
    }

    public void TaskT3_2() {
        Debug.Log("Task3.B: Without Reflection");
        this.TaskInformation.text ="Task3.B: Without Reflection";

        propertiesClass.Visibility = false;
    }
    public void ResetTask1() {
        Debug.Log("restart the scence");
        Task1.CurrentChoose = 0;
        Task1.NextChoose = 0;
        GameObject.Find("Task1").GetComponent<Task1>().ActiveObjects();
    }

    public void ResetTask2Postition () {
        Debug.Log("Reset Position");
        GameObject.Find("Task2").GetComponent<Task2>().ResetObjectPosition();
    }

}
