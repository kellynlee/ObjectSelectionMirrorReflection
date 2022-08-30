using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Task1 : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject MirrorObject;
    public static int CurrentChoose = 0;
    public static int NextChoose = 0;

    [SerializeField]
    private Boolean isSingle;

    private float raduis = 0.3f;
    void Start()
    {        

    }

    public void SetupObjects () {
        if (MenuSelection.propertiesClass.MirrorPosSetting) {
            for (int i = 0; i < 11; i++) {
                float angle = i * Mathf.PI *2f / 11;
                Vector3 mirrorPos = MirrorObject.transform.position;
                this.transform.SetPositionAndRotation(MirrorObject.transform.position,MirrorObject.transform.rotation);   
                Vector3 sepherePos = new Vector3(Mathf.Sin(angle)*raduis, Mathf.Cos(angle) * raduis, -1f);
                // this.transform.GetChild(0).GetChild(i).gameObject.SetActive(true);
                this.transform.GetChild(0).GetChild(i).transform.position += sepherePos;
                // GameObject flip = new GameObject();
                // this.FlipAndMimic(this.transform.GetChild(0).GetChild(i).gameObject, ref flip);
                // this.transform.GetChild(1).GetChild(i).transform.position += flip.transform.position;
            }
        }
    }
    public void ActiveObjects() {
        Debug.Log("initialize");
        CurrentChoose = 0;
        NextChoose = 0;
        for (int i = 0; i < 11; i++) {
            this.transform.GetChild(0).GetChild(i).gameObject.SetActive(true);
            this.transform.GetChild(0).GetChild(i).gameObject.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.green);
        }
    }


    // Update is called once per frame
    void Update()
    {
        if (MenuSelection.propertiesClass.Visibility) {
            //double
            this.transform.GetChild(0).gameObject.SetActive(true);
            this.transform.GetChild(1).gameObject.SetActive(true);
        } else {
            //single
            if (MenuSelection.propertiesClass.Perspective) {
                //1pp
                this.transform.GetChild(0).gameObject.SetActive(true);
                this.transform.GetChild(1).gameObject.SetActive(false);
            } else {
                //2pp
                this.transform.GetChild(1).gameObject.SetActive(true);
                this.transform.GetChild(0).gameObject.SetActive(false);
            }
        }
        if(CurrentChoose == 0) {
            this.transform.GetChild(0).GetChild(CurrentChoose).GetComponent<MeshRenderer>().material.SetColor("_Color", Color.red);
            this.transform.GetChild(1).GetChild(CurrentChoose).GetComponent<MeshRenderer>().material.SetColor("_Color", Color.red);
        }
    }
}
