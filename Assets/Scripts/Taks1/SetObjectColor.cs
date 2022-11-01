
using System;
using UnityEngine;

public class SetObjectColor : MonoBehaviour
{
    private int index;

    Color defaultColor = Color.green;
    Color targetColor = Color.red;
    MeshCollider collider;
    // Start is called before the first frame updateprivate int index;
    void Start()
    {
        Int32.TryParse(this.name, out index);
        defaultColor.a = 0.3f;
        targetColor.a = 0.3f;
        // do your mesh setup here or call a method that does it
        collider = GetComponent<MeshCollider>();
        collider.enabled = true;
        collider.convex = true;
    }

    // Update is called once per frame
    void Update()
    {

        // if (Task1.CurrentChoose != 0) {
            if (this.index == Task1.NextChoose) {
                this.GetComponent<MeshRenderer>().material.SetColor("_Color", targetColor);
            } else {
                this.GetComponent<MeshRenderer>().material.SetColor("_Color", defaultColor);
            }
        // }
    }
}