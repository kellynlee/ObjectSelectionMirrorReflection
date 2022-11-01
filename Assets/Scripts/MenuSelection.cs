using System.Collections.Generic;
using System.Data;
using System;
using UnityEngine;
using System.Collections;
using TMPro;
using UnityEngine.SceneManagement;
using UnitySceneManager = UnityEngine.SceneManagement.SceneManager;
using System.Diagnostics;
using System.IO;
using System.Text;
using System.Linq;

public class MenuSelection : MonoBehaviour
{
    public static TaskProperties propertiesClass;

    private TextMeshPro TaskInformation;
    static Stopwatch timer;
    void Start()
    {

        propertiesClass = new TaskProperties();
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
        this.TaskInformation = GameObject.Find("Information").GetComponent<TextMeshPro>();
    }
    public void TaskT1_1()
    {
        timer = new Stopwatch();
        UnityEngine.Debug.Log("Task1: 1pp/manual/single");
        this.TaskInformation.text = "Task1.A:  1pp/manual/single";
        Task1.CurrentChoose = 0;

        timer.Start();
        propertiesClass.Perspective = true;
        propertiesClass.Modality = true;
        propertiesClass.Visibility = false;
        propertiesClass.TaskName = "Task1.A";
        propertiesClass.SubTask = 1;
        GameObject.Find("Task1").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("Task1").transform.GetChild(1).gameObject.SetActive(false);
    }

    public void TaskT1_2()
    {
        timer = new Stopwatch();
        UnityEngine.Debug.Log("Task1.2: 1pp/manual/double");
        this.TaskInformation.text = "Task1.B:  1pp/manual/double";
        Task1.CurrentChoose = 0;
        timer.Start();
        propertiesClass.Perspective = true;
        propertiesClass.Modality = true;
        propertiesClass.Visibility = true;
        propertiesClass.TaskName = "Task1.B";
        propertiesClass.SubTask = 2;
        GameObject.Find("Task1").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("Task1").transform.GetChild(1).gameObject.SetActive(true);
    }

    public void TaskT1_3()
    {
        timer = new Stopwatch();
        UnityEngine.Debug.Log("Task1.3: 1pp/remote/single");
        this.TaskInformation.text = "Task1.C: 1pp/remote/single";
        timer.Start();
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = true;
        propertiesClass.Modality = false;
        propertiesClass.Visibility = false;
        propertiesClass.TaskName = "Task1.C";
        propertiesClass.SubTask = 3;
        GameObject.Find("Task1").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("Task1").transform.GetChild(1).gameObject.SetActive(false);

    }

    public void TaskT1_4()
    {
        timer = new Stopwatch();
        UnityEngine.Debug.Log("Task1.4: 1pp/remote/double");
        this.TaskInformation.text = "Task1.D: 1pp/remote/double";
        timer.Start();
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = true;
        propertiesClass.Modality = false;
        propertiesClass.Visibility = true;
        propertiesClass.TaskName = "Task1.D";
        propertiesClass.SubTask = 4;
        GameObject.Find("Task1").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("Task1").transform.GetChild(1).gameObject.SetActive(true);

    }

    public void TaskT1_5()
    {
        timer = new Stopwatch();
        UnityEngine.Debug.Log("Task1.5: 2pp/manual/single");
        this.TaskInformation.text = "Task1.E: 2pp/manual/single";
        timer.Start();
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = false;
        propertiesClass.Modality = true;
        propertiesClass.Visibility = false;
        propertiesClass.TaskName = "Task1.E";
        propertiesClass.SubTask = 5;
        GameObject.Find("Task1").transform.GetChild(0).gameObject.SetActive(false);
        GameObject.Find("Task1").transform.GetChild(1).gameObject.SetActive(true);
    }
    public void TaskT1_6()
    {
        timer = new Stopwatch();
        UnityEngine.Debug.Log("Task1.6: 2pp/manual/double");
        this.TaskInformation.text = "Task1.F: 2pp/manual/double";
        timer.Start();
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = false;
        propertiesClass.Modality = true;
        propertiesClass.Visibility = true;
        propertiesClass.TaskName = "Task1.F";
        propertiesClass.SubTask = 6;
        GameObject.Find("Task1").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("Task1").transform.GetChild(1).gameObject.SetActive(true);
    }
    public void TaskT1_7()
    {
        timer = new Stopwatch();
        UnityEngine.Debug.Log("Task1.7: 2pp/remote/single");
        this.TaskInformation.text = "Task1.G: 2pp/remote/single";
        timer.Start();
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = false;
        propertiesClass.Modality = false;
        propertiesClass.Visibility = false;
        propertiesClass.TaskName = "Task1.G";
        propertiesClass.SubTask = 7;
        GameObject.Find("Task1").transform.GetChild(0).gameObject.SetActive(false);
        GameObject.Find("Task1").transform.GetChild(1).gameObject.SetActive(true);
    }
    public void TaskT1_8()
    {
        timer = new Stopwatch();
        UnityEngine.Debug.Log("Task1.8: 2pp/remote/double");
        this.TaskInformation.text = "Task1.H: 2pp/remote/double";
        timer.Start();
        Task1.CurrentChoose = 0;
        propertiesClass.Perspective = false;
        propertiesClass.Modality = false;
        propertiesClass.Visibility = true;
        propertiesClass.TaskName = "Task1.H";
        propertiesClass.SubTask = 8;
        GameObject.Find("Task1").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("Task1").transform.GetChild(1).gameObject.SetActive(true);
    }

    public void SetTask1Position()
    {
        MenuSelection.propertiesClass.TaskNumber = 1;
        GameObject.Find("Task1").GetComponent<Task1>().SetupObjects();
        this.TaskInformation.text = "Task1 Ready";
        GameObject.Find("SetPosition").SetActive(false);
    }


    public void TaskT2_1()
    {
        timer = new Stopwatch();
        UnityEngine.Debug.Log("Task2.A: With Reflection");
        this.TaskInformation.text = "Task2.A: With Reflection";
        var list = new List<int>();
        foreach (Transform child in GameObject.Find("Task2/Real").transform)
        {
            if (child.gameObject.GetComponent<InstantiateFlippedObject>().isInside)
            {
                list.Add(child.GetSiblingIndex());
            }
        }
        Task2.targetNum = list[UnityEngine.Random.Range(0, list.Count)];
        UnityEngine.Debug.Log(Task2.targetNum);
        propertiesClass.Visibility = true;
        propertiesClass.TaskName = "Task2.A";
        propertiesClass.SubTask = 1;
        GameObject.Find("Task2").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("Task2").transform.GetChild(1).gameObject.SetActive(true);
        // Task2.Repetition+=1;
        timer.Start();
    }
    public void TaskT2_2()
    {
        timer = new Stopwatch();

        UnityEngine.Debug.Log("Task2.B: Without Reflection");
        this.TaskInformation.text = "Task2.B: Without Reflection";
        var list = new List<int>();
        foreach (Transform child in GameObject.Find("Task2/Real").transform)
        {
            if (child.gameObject.GetComponent<InstantiateFlippedObject>().isInside)
            {
                list.Add(child.GetSiblingIndex());
            }
        }
        Task2.targetNum = list[UnityEngine.Random.Range(0, list.Count)];
        UnityEngine.Debug.Log(Task2.targetNum);
        propertiesClass.Visibility = false;
        propertiesClass.TaskName = "Task2.B";
        propertiesClass.SubTask = 2;
        GameObject.Find("Task2").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("Task2").transform.GetChild(1).gameObject.SetActive(false);
        // Task2.Repetition+=1;
        timer.Start();

    }

    public void TaskT3_1()
    {
        UnityEngine.Debug.Log("Task3.A: 1pp/remote");
        this.TaskInformation.text = "Task3.A: 1pp/remote";
        propertiesClass.Visibility = false;
        propertiesClass.Perspective = true;
        propertiesClass.Modality = false;
        propertiesClass.TaskName = "Task3.A";
        propertiesClass.SubTask = 1;
        Task3.isManual = false;
        Task3.isDrawStart = false;
        Task3.isTouched = false;
        Task3.RenderTime = DateTime.Now.ToString("yyyyMMddHHmmssffff");
        GameObject.Find("Task3").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("Task3").transform.GetChild(1).gameObject.SetActive(false);
        GameObject.Find("Cursor").GetComponent<HandBehaviour>().DestroyPath();
        GameObject.Find("Cursor").GetComponent<HandBehaviour>().StopDrawing();
       GameObject.Find("StartPoint").GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
        GameObject.Find("EndPoint").GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
        Task3.Repetition += 1;

    }

    public void TaskT3_2()
    {
        UnityEngine.Debug.Log("Task3.B: 1pp/manual");
        this.TaskInformation.text = "Task3.B: 1pp/manual";

        propertiesClass.Visibility = false;
        propertiesClass.Perspective = true;
        propertiesClass.Modality = true;
        propertiesClass.TaskName = "Task3.B";
        propertiesClass.SubTask = 2;
        Task3.isManual = true;
        Task3.isTouched = false;
        Task3.isDrawStart = false;
        Task3.RenderTime = DateTime.Now.ToString("yyyyMMddHHmmssffff");
        GameObject.Find("Task3").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("Task3").transform.GetChild(1).gameObject.SetActive(false);

        GameObject.Find("Cursor").GetComponent<HandBehaviour>().DestroyPath();
        GameObject.Find("Cursor").GetComponent<HandBehaviour>().StopDrawing();
       GameObject.Find("StartPoint").GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
        GameObject.Find("EndPoint").GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
        Task3.Repetition += 1;
    }

    public void TaskT3_3()
    {
        UnityEngine.Debug.Log("Task3.A: 2pp/remote");
        this.TaskInformation.text = "Task3.A: 2pp/remote";
        propertiesClass.Visibility = false;
        propertiesClass.Perspective = false;
        propertiesClass.Modality = false;
        propertiesClass.TaskName = "Task3.A";
        propertiesClass.SubTask = 3;
        Task3.isManual = false;
        Task3.isTouched = false;
        Task3.isDrawStart = false;
        Task3.RenderTime = DateTime.Now.ToString("yyyyMMddHHmmssffff");
        GameObject.Find("Task3").transform.GetChild(0).gameObject.SetActive(false);
        GameObject.Find("Task3").transform.GetChild(1).gameObject.SetActive(true);
        GameObject.Find("Cursor").GetComponent<HandBehaviour>().DestroyPath();
        GameObject.Find("Cursor").GetComponent<HandBehaviour>().StopDrawing();
       GameObject.Find("StartPoint").GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
        GameObject.Find("EndPoint").GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);

        Task3.Repetition += 1;
    }


    public void TaskT3_4()
    {
        UnityEngine.Debug.Log("Task3.A: 2pp/manual");
        this.TaskInformation.text = "Task3.A: 2pp/manual";
        propertiesClass.Visibility = false;
        propertiesClass.Perspective = false;
        propertiesClass.Modality = true;
        propertiesClass.TaskName = "Task3.A";
        propertiesClass.SubTask = 4;
        Task3.isManual = true;
        Task3.isTouched = false;
        Task3.isDrawStart = false;
        Task3.RenderTime = DateTime.Now.ToString("yyyyMMddHHmmssffff");
        GameObject.Find("Task3").transform.GetChild(0).gameObject.SetActive(false);
        GameObject.Find("Task3").transform.GetChild(1).gameObject.SetActive(true);
        GameObject.Find("Cursor").GetComponent<HandBehaviour>().DestroyPath();
        GameObject.Find("Cursor").GetComponent<HandBehaviour>().StopDrawing();
        GameObject.Find("StartPoint").GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
        GameObject.Find("EndPoint").GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);

        Task3.Repetition += 1;
    }

    public void ResetTask1()
    {
        UnityEngine.Debug.Log("restart the scence");
        Task1.CurrentChoose = 0;
        Task1.NextChoose = 0;
        Task1.Repetition = 0;
        GameObject.Find("Task1").GetComponent<Task1>().ActiveObjects();
    }

    public void SendingData()
    {
        WritingTask12Data();
        WritingTask3Data();
        this.TaskInformation.text = "data file created";
        GameObject.Find("Finish").SetActive(false);
        // UnitySceneManager.LoadScene("ParticipantNumber");
    }

    public static void WritingTask12Data()
    {
        var filePath = Path.Combine(Application.persistentDataPath, "Task1&2_Data.csv");

        StringBuilder sb = new StringBuilder();

        System.Collections.Generic.IEnumerable<string> columnNames = DataLogger.Task12Data.Columns.Cast<DataColumn>().
                                        Select(column => column.ColumnName);
        sb.AppendLine(string.Join(",", columnNames));
        if (DataLogger.Task12Data != null)
        {
            if (DataLogger.Task12Data.Rows.Count > 0)
            {
                foreach (DataRow row in DataLogger.Task12Data.Rows)
                {
                    System.Collections.Generic.IEnumerable<string> fields = row.ItemArray.Select(field => field.ToString());
                    sb.AppendLine(string.Join(",", fields));
                }

                File.WriteAllText(filePath, sb.ToString());
            }
        }
    }

    public static void WritingTask3Data()
    {
        var filePath = Path.Combine(Application.persistentDataPath, "Task3_Data.csv");

        StringBuilder sb = new StringBuilder();

        System.Collections.Generic.IEnumerable<string> columnNames = DataLogger.Task3Data.Columns.Cast<DataColumn>().
                                        Select(column => column.ColumnName);
        sb.AppendLine(string.Join(",", columnNames));
        if (DataLogger.Task3Data != null)
        {
            if (DataLogger.Task3Data.Rows.Count > 0)
            {
                foreach (DataRow row in DataLogger.Task3Data.Rows)
                {
                    System.Collections.Generic.IEnumerable<string> fields = row.ItemArray.Select(field => field.ToString());
                    sb.AppendLine(string.Join(",", fields));
                }

                File.WriteAllText(filePath, sb.ToString());
            }
        }
    }
    public static int StopTimer()
    {
        int ms = 0;
        if (timer != null)
        {
            timer.Stop();
            ms = (int)timer.ElapsedMilliseconds;
        }
        return ms;
    }
    public static void StartTimer()
    {
        timer = new Stopwatch();

        timer.Start();
    }

}
