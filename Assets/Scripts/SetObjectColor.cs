
using System;
using UnityEngine;

public class SetObjectColor : MonoBehaviour
{
    private int index;

    // Start is called before the first frame updateprivate int index;
    void Start()
    {
        Int32.TryParse(this.name, out index);
    }

    // Update is called once per frame
    void Update()
    {
        if (Task1.CurrentChoose != 0) {
            if (this.index == Task1.NextChoose) {
                this.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.red);
            } else {
                this.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.green);
            }
        }
    }
}