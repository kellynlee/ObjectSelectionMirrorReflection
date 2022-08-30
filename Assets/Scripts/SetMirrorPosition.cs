using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MRTKExtensions.QRCodes;
using TMPro;
using Microsoft.MixedReality.Toolkit;

public class SetMirrorPosition : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]
    private QRTrackerController trackerController;

    [SerializeField]
    private TextMeshPro displayText;

    GameObject mirrorObj;

   private IQRCodeTrackingService qrCodeTrackingService;

    private IQRCodeTrackingService QRCodeTrackingService
    {
        get
        {
            while (!MixedRealityToolkit.IsInitialized && Time.time < 5);
            return qrCodeTrackingService ??
                   (qrCodeTrackingService = MixedRealityToolkit.Instance.GetService<IQRCodeTrackingService>());
        }
    }
    void Start()
    {
        this.transform.gameObject.SetActive(false);
        trackerController.PositionSet += this.PoseFound;
        // this.displayText.text = "Start";
    }

    private void PoseFound(object sender, Pose pose) {
        // var childObj = transform.GetChild(0);
        // mirrorObj = GameObject.Find("VirtualMirror");

        // mirrorObj.transform.SetPositionAndRotation(pose.position, pose.rotation);
        // mirrorObj.transform.gameObject.SetActive(true);

        // displayText.text = "Setting mirror position" + pose.position.ToString() + pose.rotation.ToString();
        //display tracker service once the position is setting
        qrCodeTrackingService.Disable();
    }
}
