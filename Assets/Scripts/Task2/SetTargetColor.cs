using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetTargetColor : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        // if (int index = transform.GetSiblingIndex();)
        if(Task2.targetNum == this.transform.GetSiblingIndex()) {
            this.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.green);
        } else {
            this.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
        }
    }
}
