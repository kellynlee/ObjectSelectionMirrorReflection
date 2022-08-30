using System;
using Microsoft.MixedReality.Toolkit;
using UnityEngine;
using TMPro;

namespace MRTKExtensions.QRCodes
{
    public class QRTrackerController : MonoBehaviour
    {
        [SerializeField]
        private SpatialGraphCoordinateSystemSetter spatialGraphCoordinateSystemSetter;

        [SerializeField]
        private string locationQrValue = string.Empty;

        [SerializeField]
        private TextMeshPro information;

        [SerializeField]
        private GameObject Mirror;

        [SerializeField]
        private GameObject Task1;

        [SerializeField]
        private GameObject Scan;

        [SerializeField]
        private AudioSource audio;


        private Transform markerHolder;
        private QRInfo lastMessage;
        private int trackingCounter;

        public bool IsTrackingActive { get; private set; } = true;

        private IQRCodeTrackingService qrCodeTrackingService;
        private IQRCodeTrackingService QRCodeTrackingService
        {
            get
            {
                while (!MixedRealityToolkit.IsInitialized && Time.time < 5) ;
                return qrCodeTrackingService ??
                       (qrCodeTrackingService = MixedRealityToolkit.Instance.GetService<IQRCodeTrackingService>());
            }
        }

        private void Start()
        {
            if (!QRCodeTrackingService.IsSupported)
            {
                return;
            }

            markerHolder = spatialGraphCoordinateSystemSetter.gameObject.transform;
            QRCodeTrackingService.QRCodeFound += ProcessTrackingFound;
            spatialGraphCoordinateSystemSetter.PositionAcquired += SetScale;
            spatialGraphCoordinateSystemSetter.PositionAcquisitionFailed += 
                (s,e) => ResetTracking();


            if (QRCodeTrackingService.IsInitialized)
            {
                StartTracking();
            }
            else
            {
                QRCodeTrackingService.Initialized += QRCodeTrackingService_Initialized;
            }
        }

        private void QRCodeTrackingService_Initialized(object sender, EventArgs e)
        {
            StartTracking();
        }

        private void StartTracking()
        {
            QRCodeTrackingService.Enable();
        }

        public void ResetTracking()
        {
            if (QRCodeTrackingService.IsInitialized)
            {
                IsTrackingActive = true;
                trackingCounter = 0;
            }
        }

        private void ProcessTrackingFound(object sender, QRInfo msg)
        {
            if ( msg == null || !IsTrackingActive)
            {
                return;
            }

            lastMessage = msg;


            if (msg.Data == locationQrValue)
            {
                if (trackingCounter++ == 2)
                {
                information.text = "Successfully get qr code";
                IsTrackingActive = false;
                spatialGraphCoordinateSystemSetter.SetLocationIdSize(msg.SpatialGraphNodeId,
                    msg.PhysicalSideLength);
                }
            }
        }


        private void SetScale(object sender, Pose pose)
        {
            // markerHolder.localScale = Vector3.one * lastMessage.PhysicalSideLength;
            // information.text = "setting mirror position" + pose.position.ToString() + pose.rotation.ToString();
            audio.Play();
            Mirror.SetActive(true);
            pose.rotation *= Quaternion.Euler(90, 0, 0);
            Mirror.transform.SetPositionAndRotation(pose.position, pose.rotation);
            GameObject.Find("Task1").transform.localPosition = pose.position;

            MenuSelection.propertiesClass.MirrorPosSetting = true;
            Task1.GetComponent<Task1>().SetupObjects();
            Scan.SetActive(false);
            // QRCodeTrackingService.Disable();
            PositionSet?.Invoke(this, pose);
        }

        public EventHandler<Pose> PositionSet;
    }
}
