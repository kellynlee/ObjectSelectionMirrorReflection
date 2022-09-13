using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnitySceneManager = UnityEngine.SceneManagement.SceneManager;
public class SceneManager : MonoBehaviour
{
    // Start is called before the first frame update


    public void LoadTask1() {
    Scene scene = UnitySceneManager.GetActiveScene();

        if (scene.name != "Task1") {
            UnitySceneManager.LoadScene("Task1");
            GameObject.Find("Task1").transform.localPosition = GameObject.Find("VirtualMirror").transform.position;
            MenuSelection.propertiesClass.MirrorPosSetting = true;
            GameObject.Find("Task1").GetComponent<Task1>().SetupObjects();
        }
    }


    public void LoadTask2() {
    Scene scene = UnitySceneManager.GetActiveScene();

        if (scene.name != "Task2") {
            MenuSelection.propertiesClass.Modality = false;
            MenuSelection.propertiesClass.Perspective = true;
            MenuSelection.propertiesClass.Visibility = false;
            UnitySceneManager.LoadScene("Task2");
        }
    }

    public void LoadTask3() {
    Scene scene = UnitySceneManager.GetActiveScene();

        if (scene.name != "Task3") {
            MenuSelection.propertiesClass.Modality = false;
            MenuSelection.propertiesClass.Perspective = true;
            MenuSelection.propertiesClass.Visibility = true;
            UnitySceneManager.LoadScene("Task3");
        }
    }
}
