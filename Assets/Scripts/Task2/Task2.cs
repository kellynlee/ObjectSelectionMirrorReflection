using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnitySceneManager = UnityEngine.SceneManagement.SceneManager;
public class Task2 : MonoBehaviour
{
    static int objectNum = 21;
    [SerializeField]
    private GameObject[] prefab;
    // Start is called before the first frame update
    public static int targetNum = -1;
    void Start()
    {
        MenuSelection.propertiesClass.Modality = false;
        MenuSelection.propertiesClass.Perspective = true;
        MenuSelection.propertiesClass.TaskNumber = 2;
        this.transform.localPosition = GameObject.Find("VirtualMirror").transform.position;
        var mirrorPos = GameObject.Find("VirtualMirror").transform.position;
        GameObject.Find("View Dependent Planes").transform.position = GameObject.Find("VirtualMirror").transform.position;
        for (var i = 0; i < 100; i++)
        {
            // Vector3 radomPosition = new Vector3(Random.Range(-2.5f,2.5f),Random.Range(-1f,1.5f),Random.Range(-1F,1f));
            Vector3 radomPosition = new Vector3(Random.Range(-1.7f, 1.7f), Random.Range(-1f, 1.5f), Random.Range(mirrorPos.z - 0.2f, mirrorPos.z - 1.3f));

            GameObject tile = Instantiate(prefab[Random.Range(0, prefab.Length)], radomPosition, Quaternion.identity) as GameObject;
            tile.layer = LayerMask.NameToLayer("Real");
            tile.transform.parent = this.transform.GetChild(0);
        }
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
        MenuSelection.propertiesClass.TaskNumber = 2;
        this.transform.localPosition = GameObject.Find("VirtualMirror").transform.position;
        var mirrorPos = GameObject.Find("VirtualMirror").transform.position;
        GameObject.Find("View Dependent Planes").transform.position = GameObject.Find("VirtualMirror").transform.position;
        for (var i = 0; i < 100; i++)
        {
            // Vector3 radomPosition = new Vector3(Random.Range(-2.5f,2.5f),Random.Range(-1f,1.5f),Random.Range(-1F,1f));
            Vector3 radomPosition = new Vector3(Random.Range(-1.7f, 1.7f), Random.Range(-1f, 1.5f), Random.Range(mirrorPos.z - 0.2f, mirrorPos.z - 1.3f));

            GameObject tile = Instantiate(prefab[Random.Range(0, prefab.Length)], radomPosition, Quaternion.identity) as GameObject;
            tile.layer = LayerMask.NameToLayer("Real");
            tile.transform.parent = this.transform.GetChild(0);
        }
    }


    public void ResetObjectPosition()
    {
        var mirrorPos = GameObject.Find("VirtualMirror").transform.position;
        for (var i = 0; i < 100; i++)
        {
            Vector3 radomPosition = new Vector3(Random.Range(-1.7f, 1.7f), Random.Range(-1f, 1.5f), Random.Range(mirrorPos.z - 0.2f, mirrorPos.z - 1.3f));
            this.transform.GetChild(0).GetChild(i).gameObject.SetActive(true);
            this.transform.GetChild(0).GetChild(i).transform.position = radomPosition;
            this.transform.GetChild(0).GetChild(i).gameObject.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.red);
        }
    }

    // Update is called once per frame
    void Update()
    {
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
