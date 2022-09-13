using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Calculates the perspective of a camera given three corners on an imagePlane.
/// </summary>
[ExecuteInEditMode]
public class ViewCamera : MonoBehaviour
{
    public GameObject cameraImagePlane;
    public bool estimateViewFrustum = true;
    public bool setNearClipPlane = false;
    public float nearClipPlaneOffset = -0.01f;

    private Vector3 lowerLeftCorner;
    private Vector3 lowerRightCorner;
    private Vector3 upperLeftCorner;

    private Camera eyeCam;

    public enum ImagePlane
    {
        XZ_TOP,
        XZ_BOTTOM,
        YZ_LEFT,
        YZ_RIGHT,
        XY_FRONT,
        XY_BACK
    };
    public ImagePlane plane;


    void Start()
    {
        eyeCam = GetComponent<Camera>();
        OnValidate();
    }

    public void SetImagePlane(GameObject g)
    {
        cameraImagePlane = g;
    }



    void OnValidate()
    {
        // min & max are calculated from the object bounding box
        // TODO: need to position the image plane in world space in relation to the user
        // keeping the plane perpendicular to the user's point of view

        Vector3 min = cameraImagePlane.GetComponent<MeshFilter>().sharedMesh.bounds.min;
        Vector3 max = cameraImagePlane.GetComponent<MeshFilter>().sharedMesh.bounds.max;

        switch (plane)
        {
            case ImagePlane.XY_FRONT:
                {
                    lowerLeftCorner = new Vector3(max.x, min.y, min.z);
                    lowerRightCorner = min;
                    upperLeftCorner = new Vector3(max.x, max.y, min.z);
                    break;
                }
            case ImagePlane.XY_BACK:
                {
                    lowerLeftCorner = min;
                    lowerRightCorner = new Vector3(max.x, min.y, min.z);
                    upperLeftCorner = new Vector3(min.x, max.y, min.z);

                    break;
                }
            case ImagePlane.XZ_TOP:
                {
                    lowerLeftCorner = new Vector3(max.x, min.y, max.z);
                    lowerRightCorner = new Vector3(min.x, min.y, max.z);
                    upperLeftCorner = new Vector3(max.x, min.y, min.z);
                    break;
                }
            case ImagePlane.XZ_BOTTOM:
                {
                    lowerLeftCorner = new Vector3(min.x, min.y, max.z);
                    lowerRightCorner = new Vector3(max.x, min.y, max.z);
                    upperLeftCorner = new Vector3(min.x, min.y, min.z);
                    break;
                }
            case ImagePlane.YZ_LEFT:
                {
                    lowerLeftCorner = new Vector3(min.x, min.y, min.z);
                    lowerRightCorner = new Vector3(min.x, min.y, max.z);
                    upperLeftCorner = new Vector3(min.x, max.y, min.z);

                    break;
                }
            case ImagePlane.YZ_RIGHT:
                {
                    lowerLeftCorner = new Vector3(min.x, min.y, max.z);
                    lowerRightCorner = new Vector3(min.x, min.y, min.z);
                    upperLeftCorner = new Vector3(min.x, max.y, max.z);
                    break;
                }
            default:
                break;
        }
    }

    // Update is called once per frame
    void LateUpdate()
    {
        if (cameraImagePlane != null && eyeCam != null)
        {
            //Lower left corner of image plane (world space)
            Vector3 pa = cameraImagePlane.transform.TransformPoint(lowerLeftCorner);
            // Lower right
            Vector3 pb = cameraImagePlane.transform.TransformPoint(lowerRightCorner);
            // Upper left
            Vector3 pc = cameraImagePlane.transform.TransformPoint(upperLeftCorner);

            // Eye position
            Vector3 pe = eyeCam.transform.position;
            // Distance between eye and near clip plane
            float n = eyeCam.nearClipPlane;
            // Distance between eye and far clip plane
            float f = eyeCam.farClipPlane;

            Vector3 va = pa - pe; // pe to pa
            Vector3 vb = pb - pe; // pe to pb
            Vector3 vc = pc - pe; // pe to pc
            Vector3 vr = pb - pa; // Screen right axis
            Vector3 vu = pc - pa; // Screen up axis
            Vector3 vn;

            // If the eye is behind the screen reverse the z axis
            if (Vector3.Dot(-Vector3.Cross(va, vc), vb) < 0)
            {
                vu *= -1;
                pa = pc;
                pb = pa + vr;
                pc = pa + vu;
                va = pa - pe;
                vb = pb - pe;
                vc = pc - pe;
            }

            vr.Normalize();
            vu.Normalize();
            vn = -Vector3.Cross(vr, vu);           // Unity coord are left handed, so we negate result.
            vn.Normalize();

            float d = -Vector3.Dot(va, vn);        // Distance from eye to screen.
            if (setNearClipPlane)
            {
                n = d + nearClipPlaneOffset;
                eyeCam.nearClipPlane = n;
            }
            float l = Vector3.Dot(vr, va) * n / d; // Distance to left screen edge.
            float r = Vector3.Dot(vr, vb) * n / d; // Distance to right screen edge.
            float b = Vector3.Dot(vu, va) * n / d; // Distance to bottom screen edge.
            float t = Vector3.Dot(vu, vc) * n / d; // Distance to top screen edge.

            Matrix4x4 p = Matrix4x4.identity;      // New projection matrix
            p[0, 0] = 2 * n / (r - l);
            p[0, 1] = 0;
            p[0, 2] = (r + l) / (r - l);
            p[0, 3] = 0;

            p[1, 0] = 0;
            p[1, 1] = 2 * n / (t - b);
            p[1, 2] = (t + b) / (t - b);
            p[1, 3] = 0;

            p[2, 0] = 0;
            p[2, 1] = 0;
            p[2, 2] = (f + n) / (n - f);
            p[2, 3] = 2 * f * n / (n - f);

            p[3, 0] = 0;
            p[3, 1] = 0;
            p[3, 2] = -1;
            p[3, 3] = 0;

            Matrix4x4 rm = Matrix4x4.identity;     // rotation matrix;
            rm[0, 0] = vr.x;
            rm[0, 1] = vr.y;
            rm[0, 2] = vr.z;
            rm[0, 3] = 0;

            rm[1, 0] = vu.x;
            rm[1, 1] = vu.y;
            rm[1, 2] = vu.z;
            rm[1, 3] = 0;

            rm[2, 0] = vn.x;
            rm[2, 1] = vn.y;
            rm[2, 2] = vn.z;
            rm[2, 3] = 0;

            rm[3, 0] = 0;
            rm[3, 1] = 0;
            rm[3, 2] = 0;
            rm[3, 3] = 1;

            Matrix4x4 tm = Matrix4x4.identity;     // translation matrix;
            tm[0, 0] = 1;
            tm[0, 1] = 0;
            tm[0, 2] = 0;
            tm[0, 3] = -pe.x;

            tm[1, 0] = 0;
            tm[1, 1] = 1;
            tm[1, 2] = 0;
            tm[1, 3] = -pe.y;

            tm[2, 0] = 0;
            tm[2, 1] = 0;
            tm[2, 2] = 1;
            tm[2, 3] = -pe.z;

            tm[3, 0] = 0;
            tm[3, 1] = 0;
            tm[3, 2] = 0;
            tm[3, 3] = 1;

            // Set matrices
            eyeCam.projectionMatrix = p;
            eyeCam.worldToCameraMatrix = rm * tm;

            if (estimateViewFrustum)
            {
                // Rotate camera to screen for culling to work
                Quaternion q = Quaternion.identity;
                q.SetLookRotation((0.5f * (pb + pc) - pe), vu);
                eyeCam.transform.rotation = q;

                // set fieldOfView 
            }

        }
    }
}
