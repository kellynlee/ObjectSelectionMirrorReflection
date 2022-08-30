using System.Threading.Tasks;
using System.Reflection.Emit;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class onManulSelection : MonoBehaviour
{
    // Start is called before the first frame update

    private int collisionCount = 0;
    private int layerMask;

    private int choose;

    [SerializeField]
    private AudioSource audioSourceFalse;


    void Start()
    {
        if(MenuSelection.propertiesClass.Perspective) {
            //1pp
            this.layerMask = LayerMask.GetMask("Real");
        } else {
            //2pp
            this.layerMask = LayerMask.GetMask("Mirror");
        }
    }

    void  OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "T1Object") {
            ContactPoint contact = collision.contacts[this.collisionCount];
            GameObject colliderObj = collision.gameObject;
            if (colliderObj.tag ==  "T1Object") {
                var distance = Vector3.Distance(colliderObj.transform.position, contact.point);
                Int32.TryParse(colliderObj.name,out choose);
                if (Task1.CurrentChoose ==0 && Task1.NextChoose == 0) {
                    if (choose == 1) {
                        Task1.CurrentChoose = choose;
                        Task1.NextChoose = choose+ 6;
                    } else {
                        // audioSourceFalse.Play();
                    }
                } else {
                    if (choose == Task1.NextChoose) {
                        Task1.NextChoose = Task1.CurrentChoose+1;
                        Task1.CurrentChoose = choose; 
                    } else {
                        // audioSourceFalse.Play();
                    }
                    if (Task1.CurrentChoose == 11 && choose == 6) {
                        Task1.CurrentChoose = choose;
                        Task1.NextChoose = choose;
                    }
                }
            }
            this.collisionCount += this.collisionCount;
            // Destroy(colliderObj);
        }
    }
}
