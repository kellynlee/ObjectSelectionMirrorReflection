using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlipCamera : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject MainCamera;
    GameObject mirrorObj;
    void Start()
    {
        this.mirrorObj = GameObject.Find("VirtualMirror");
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 flippedLocalPos = this.mirrorObj.transform.InverseTransformPoint(MainCamera.transform.position);
        Vector3 updatedLocalPos = flippedLocalPos;
        updatedLocalPos.y *= -1;

        this.transform.position = this.mirrorObj.transform.TransformPoint(updatedLocalPos);

        //mimic rotation
        // inspired from:
        // https://forum.unity.com/threads/how-to-mirror-a-euler-angle-or-rotation.90650/
        // http://www.euclideanspace.com/maths/geometry/affine/reflection/quaternion/index.htm
        //Quaternion flippedGlobalRot = this.flippedObj.transform.rotation;
        MeshFilter mirrorPlane = this.mirrorObj.GetComponent<MeshFilter>();
        Vector3 mirrorNormal = mirrorPlane.transform.TransformDirection(mirrorPlane.mesh.normals[0]);
        //Quaternion mirrorQuat = new Quaternion(mirrorNormal.x, mirrorNormal.y, mirrorNormal.z, 0);

        //this.transform.rotation = mirrorQuat * flippedGlobalRot * new Quaternion(-mirrorQuat.x, -mirrorQuat.y, -mirrorQuat.z, mirrorQuat.w);

        Vector3 forward = MainCamera.transform.forward;
        Vector3 upward = MainCamera.transform.up;
        Vector3 mirroredFor = Vector3.Reflect(forward, mirrorNormal);
        Vector3 mirroredUp = Vector3.Reflect(upward, mirrorNormal);
        //setting flipped object's position and render
        this.transform.rotation = Quaternion.LookRotation(mirroredFor, mirroredUp);
        //Vector3 rot = this.flippedObj.transform.rotation.eulerAngles;
        //rot = new Vector3(rot.x, rot.y *-1, -1* rot.z);
        //this.transform.rotation = Quaternion.Euler(rot);
        //this.transform.rotation = this.flippedObj.transform.rotation;
    }
}
