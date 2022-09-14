using System;
using UnityEngine;
using UnityEditor;

public class InstantiateFlippedObject : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject prefab;

    private GameObject flippedObj;
    private GameObject mirrorObj;

    private Camera camera;

    void Start()
    {
        this.mirrorObj = GameObject.Find("VirtualMirror");
        this.flippedObj = Instantiate(prefab, GameObject.Find("Task2").transform.GetChild(1));
        this.flippedObj.layer = LayerMask.NameToLayer("Mirror");
        this.camera = GameObject.Find("View Dependent Camera").GetComponent<Camera>();
    }

    void FlipAndMimic() {
        Vector3 flippedLocalPos = this.mirrorObj.transform.InverseTransformPoint(this.transform.position);
        Vector3 updatedLocalPos = flippedLocalPos;
        updatedLocalPos.y *= -1;

        this.flippedObj.transform.position = this.mirrorObj.transform.TransformPoint(updatedLocalPos);

        //mimic rotation
        // inspired from:
        // https://forum.unity.com/threads/how-to-mirror-a-euler-angle-or-rotation.90650/
        // http://www.euclideanspace.com/maths/geometry/affine/reflection/quaternion/index.htm
        //Quaternion flippedGlobalRot = this.flippedObj.transform.rotation;
        MeshFilter mirrorPlane = this.mirrorObj.GetComponent<MeshFilter>();
        Vector3 mirrorNormal = mirrorPlane.transform.TransformDirection(mirrorPlane.mesh.normals[0]);
        //Quaternion mirrorQuat = new Quaternion(mirrorNormal.x, mirrorNormal.y, mirrorNormal.z, 0);

        //this.transform.rotation = mirrorQuat * flippedGlobalRot * new Quaternion(-mirrorQuat.x, -mirrorQuat.y, -mirrorQuat.z, mirrorQuat.w);

        Vector3 forward = this.transform.forward;
        Vector3 upward = this.transform.up;
        Vector3 mirroredFor = Vector3.Reflect(-forward, mirrorNormal);
        Vector3 mirroredUp = Vector3.Reflect(upward, mirrorNormal);
        //setting flipped object's position and render
        this.flippedObj.transform.rotation = Quaternion.LookRotation(mirroredFor, mirroredUp);
        //Vector3 rot = this.flippedObj.transform.rotation.eulerAngles;
        //rot = new Vector3(rot.x, rot.y *-1, -1* rot.z);
        //this.transform.rotation = Quaternion.Euler(rot);
        //this.transform.rotation = this.flippedObj.transform.rotation;
    }

    private bool checkFOV(Camera c, GameObject target) {
        var planes = GeometryUtility.CalculateFrustumPlanes(c);
        var position = target.transform.position;
        // foreach(var plane in planes){
        //     if (plane.GetDistanceToPoint(position) < 0) {
        //         return false;
        //     }
        // }
        return GeometryUtility.TestPlanesAABB(planes, target.GetComponent<Collider>().bounds);
    } 
    // Update is called once per frame
    void Update()
    {
        if (this.transform.gameObject.activeSelf) {
            this.FlipAndMimic();
            if (this.checkFOV(this.camera, this.flippedObj)) {
                this.flippedObj.SetActive(true);
                Debug.Log("in");
            } else {
                this.flippedObj.SetActive(false);
            }
        }
    }
}

