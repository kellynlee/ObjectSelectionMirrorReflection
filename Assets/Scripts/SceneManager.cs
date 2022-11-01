using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnitySceneManager = UnityEngine.SceneManagement.SceneManager;
using System.Data;
using System.IO;
using System.Threading.Tasks;
using TMPro;

public class SceneManager : MonoBehaviour
{
    // Start is called before the first frame update

    public TouchScreenKeyboard keyboard;

    private TextMeshPro TaskInformation;

    public void LoadParticipantNumber() {
        Scene scene = UnitySceneManager.GetActiveScene();

        if (scene.name != "ParticipantNumber") {
            UnitySceneManager.LoadScene("ParticipantNumber");
            // GameObject.Find("Information").GetComponent<TextMeshPro>().text = "Task1";
        }
    }

    public void SettingParticipantNumber(string value) {
        Debug.Log(value);
        
        DataLogger.participantNum = value;
        GameObject.Find("Information").GetComponent<TextMeshPro>().text = value;
    }

    public void LoadTask1()
    {
        Scene scene = UnitySceneManager.GetActiveScene();
        if (scene.name != "Task1")
        {
            DataLogger.CreateTable();
            UnitySceneManager.LoadScene("Task1");
            GameObject.Find("Information").GetComponent<TextMeshPro>().text = "Task1";
        }
    }


    public void LoadTask2()
    {
        Scene scene = UnitySceneManager.GetActiveScene();

        if (scene.name != "Task2")
        {
            MenuSelection.propertiesClass.Modality = false;
            MenuSelection.propertiesClass.Perspective = true;
            MenuSelection.propertiesClass.Visibility = false;
            MenuSelection.StopTimer();
            // this.WriteData(1);
            MenuSelection.WritingTask12Data();
            UnitySceneManager.LoadScene("Task2");
            GameObject.Find("Information").GetComponent<TextMeshPro>().text = "Task2";

        }
    }


    public void LoadTask3()
    {
        Scene scene = UnitySceneManager.GetActiveScene();

        if (scene.name != "Task3")
        {
            MenuSelection.propertiesClass.Modality = false;
            MenuSelection.propertiesClass.Perspective = true;
            MenuSelection.propertiesClass.Visibility = true;
            MenuSelection.StopTimer();
            MenuSelection.WritingTask12Data();
            UnitySceneManager.LoadScene("Task3");
            GameObject.Find("Information").GetComponent<TextMeshPro>().text = "Task3";

        }
    }
}
