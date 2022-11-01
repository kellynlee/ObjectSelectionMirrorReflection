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

    public GameObject FlipCamera;

    public static int Repetition = 0;
    void Start()
    {
        MenuSelection.propertiesClass.Modality = false;
        MenuSelection.propertiesClass.Perspective = true;
        MenuSelection.propertiesClass.TaskNumber = 2;
        this.transform.localPosition = GameObject.Find("VirtualMirror").transform.position;
        var mirrorPos = GameObject.Find("VirtualMirror").transform.position;
        GameObject.Find("View Dependent Planes").transform.position = mirrorPos;

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
        GameObject.Find("View Dependent Planes").transform.position = mirrorPos;
        Camera camera = this.FlipCamera.GetComponent<Camera>();
        var planes = GeometryUtility.CalculateFrustumPlanes(camera);
        Repetition = 0;
        var count = 1;
        var cameraPos = GameObject.Find("Main Camera").transform.position;
        for (var i = 0; i < 200; i++)
        {
            float z = Random.Range(mirrorPos.z - 0.2f, mirrorPos.z - 2.5f);
            float x = camera.ViewportToWorldPoint(new Vector3(Random.Range(0f, 1f), Random.Range(0f, 1f), z)).x;
            float y = camera.ViewportToWorldPoint(new Vector3(Random.Range(0f, 1f), Random.Range(0f, 1f), z)).y;
            // Vector3 randomPosition = new Vector3(Random.Range(-1.4f, 1.4f), Random.Range(-.5f, 1.5f), Random.Range(mirrorPos.z-0.2f,mirrorPos.z -2.5f));
            Vector3 randomPosition = new Vector3(x, y, z);
            if (!((randomPosition.x > cameraPos.x -0.4f && randomPosition.x <cameraPos.x + 0.4f) && (randomPosition.z > cameraPos.z -0.25f && randomPosition.z <cameraPos.z + 0.25f) && randomPosition.y < cameraPos.y))
            {
                GameObject tile = Instantiate(prefab[Random.Range(0, prefab.Length)], randomPosition, Quaternion.identity) as GameObject;
                if (!GeometryUtility.TestPlanesAABB(planes, tile.GetComponent<Collider>().bounds))
                {
                    Destroy(tile);
                }
                else
                {
                    tile.layer = LayerMask.NameToLayer("Real");
                    tile.transform.parent = this.transform.GetChild(0);
                    count += 1;
                    
                }
            } else {
            }

        }
        Debug.Log("generated" + count.ToString() + "objects");
        this.transform.GetChild(1).gameObject.SetActive(false);
    }

    void Update()
    {
        if (Repetition >= 5)
        {
            if (MenuSelection.propertiesClass.Visibility)
            {
                if (GameObject.Find("T2_1") != null)
                {
                    Destroy(GameObject.Find("T2_1"));
                    Repetition = 0;
                }
            }
            else
            {
                if (GameObject.Find("T2_2") != null)
                {
                    Destroy(GameObject.Find("T2_2"));
                    Repetition = 0;
                }
            }
        }
    }

}
