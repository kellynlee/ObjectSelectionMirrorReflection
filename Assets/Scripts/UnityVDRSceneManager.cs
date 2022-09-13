
using UnityEngine;
using UnityEditor;


/// <summary>
/// Unity View Dependent Rendering Scene Manager creates and populates a scene for VDR capturing.
/// This manager creates two planes: one for capturing, one for rendering, and a ViewCamera.
/// </summary>
public class UnityVDRSceneManager : MonoBehaviour
{
    [Header("Ground Plane Base Size")]
    public GameObject baseSize;
    [SerializeField] private Vector3 baseScale;

    [Header("Unique VDR Layer Names")]
    public string captureLayerString = "Capture Layer [VDR]";
    public string renderLayerString = "Render Layer";

    [Header("Top Level Container")]
    [SerializeField]
    private GameObject viewAreas;

    [Header("Individual VDR GameObjects")]
    public GameObject captureArea;
    public GameObject renderArea;

    [Header("VDR for HMD")]
    public bool useHMD;

    [Header("VDR Camera")]
    [SerializeField]
    private GameObject viewCamera;
    private GameObject viewCameraOtherEye;

    [Header("Captured Image from Camera")]
    [SerializeField]
    private RenderTexture renderTexture;

    [Header("Rendering Material")]
    [SerializeField]
    private Material renderMaterial;

    [Header("Uncheck to Recreate entire VDR Scene")]
    public bool keepCreatedComponents = true;

    public void Bootstrap()
    {
        // Name GameObject Component
        this.name = "View Dependent Manager";

#if UNITY_EDITOR
        // Create Required Layers
        if (!UnityLayerEditor.CheckForLayer(captureLayerString))
        {
            UnityLayerEditor.CreateNewLayer(captureLayerString);
        }

        if (!UnityLayerEditor.CheckForLayer(renderLayerString))
        {
            UnityLayerEditor.CreateNewLayer(renderLayerString);
        }
#endif

        if (baseSize)
        {
            GameObject baseSizeCopy = new GameObject();
            baseSizeCopy.transform.position = baseSize.transform.position;
            baseSizeCopy.transform.rotation = baseSize.transform.rotation;
            baseSizeCopy.transform.localScale = baseSize.transform.localScale;

            baseSizeCopy.transform.SetPositionAndRotation(Vector3.zero, Quaternion.identity);
            if (baseSize.GetComponent<MeshFilter>().sharedMesh.ToString().Equals("Plane (UnityEngine.Mesh)"))
                baseScale = baseSizeCopy.transform.localScale;
            else
                baseScale = Vector3.one;

            GameObject boundingVolume = new GameObject("Bounding Volume");
            boundingVolume.transform.parent = this.transform.parent;
            boundingVolume.transform.localScale = baseSize.transform.localScale;
            BoxCollider b = boundingVolume.AddComponent<BoxCollider>();
            b.size = new Vector3(1, 2.5f, 1);
            b.center = new Vector3(0, b.size.y * 0.5f, 0);

            DestroyImmediate(baseSizeCopy);

        }

        if (!keepCreatedComponents)
        {
            // Create the Render Texture & Material
            if (renderTexture != null)
            {
                DestroyImmediate(renderTexture);
                DestroyImmediate(renderMaterial);
            }

            renderTexture = new RenderTexture(2048, 2048, 16, RenderTextureFormat.ARGB32);
            renderTexture.name = "Render Area Texture";
            renderTexture.Create();

            renderMaterial = new Material(Shader.Find("Diffuse"));
            renderMaterial.SetTexture("_MainTex", renderTexture);

            // Create the View Camera(s)
            if (viewCamera != null)
            {
                DestroyImmediate(viewCamera);
            }

            if (viewCameraOtherEye != null)
            {
                DestroyImmediate(viewCameraOtherEye);
            }

            viewCamera = new GameObject();
            viewCamera.name = "View Dependent Camera";
            viewCamera.AddComponent<UnityVDRCamera>();
            viewCamera.GetComponent<UnityVDRCamera>().ApplyRenderTexture(renderTexture);
            viewCamera.GetComponent<UnityVDRCamera>().SetRenderMask(captureLayerString);
            viewCamera.transform.parent = this.transform;

            if (useHMD)
            {
                viewCameraOtherEye = new GameObject();
                viewCameraOtherEye.name = "View Dependent Camera Right Eye";
                viewCameraOtherEye.AddComponent<UnityVDRCamera>();
                viewCameraOtherEye.GetComponent<UnityVDRCamera>().ApplyRenderTexture(renderTexture);
                viewCameraOtherEye.GetComponent<UnityVDRCamera>().SetRenderMask(captureLayerString);
                viewCameraOtherEye.transform.parent = this.transform;
                viewCameraOtherEye.GetComponent<Camera>().stereoTargetEye = StereoTargetEyeMask.Right;

                viewCamera.name = "View Dependent Camera Left Eye";
                viewCamera.GetComponent<Camera>().stereoTargetEye = StereoTargetEyeMask.Left;

            }

            // Destroy the View Area Containers
            if (viewAreas != null)
            {
                DestroyImmediate(viewAreas);
            }

            if (captureArea != null)
            {
                DestroyImmediate(captureArea);
            }

            if (renderArea != null)
            {
                DestroyImmediate(renderArea);
            }

            viewAreas = new GameObject("View Dependent Planes");
            viewAreas.transform.parent = this.transform;

            captureArea = GameObject.CreatePrimitive(PrimitiveType.Plane);
            captureArea.name = "Capture Area";
            captureArea.transform.parent = viewAreas.transform;
            captureArea.layer = LayerMask.NameToLayer(captureLayerString);
            captureArea.GetComponent<MeshRenderer>().materials = new Material[0];

            renderArea = GameObject.CreatePrimitive(PrimitiveType.Plane);
            renderArea.name = "Render Area";
            renderArea.transform.parent = viewAreas.transform;
            renderArea.transform.localScale = new Vector3(renderArea.transform.localScale.x, renderArea.transform.localScale.y, renderArea.transform.localScale.z);
            renderArea.GetComponent<Renderer>().material = renderMaterial;
            renderArea.layer = LayerMask.NameToLayer(renderLayerString);

            if (baseSize)
            {
                captureArea.transform.position = baseSize.transform.position;
                captureArea.transform.rotation = baseSize.transform.rotation;
                captureArea.transform.localScale = baseScale;

                renderArea.transform.position = baseSize.transform.position;
                renderArea.transform.rotation = baseSize.transform.rotation;
                renderArea.transform.localScale = baseScale;
            }

        }
        else
        {
            if (renderTexture == null)
            {
                renderTexture = new RenderTexture(2048, 2048, 16, RenderTextureFormat.ARGB32);
                renderTexture.name = "Render Area Texture";
                renderTexture.Create();

                renderMaterial = new Material(Shader.Find("Diffuse"));
                renderMaterial.SetTexture("_MainTex", renderTexture);
            }

            if (viewCamera == null)
            {
                viewCamera = new GameObject();
                viewCamera.name = "View Dependent Camera";
                viewCamera.AddComponent<UnityVDRCamera>();
                viewCamera.GetComponent<UnityVDRCamera>().ApplyRenderTexture(renderTexture);
                viewCamera.transform.parent = this.transform;

                if (useHMD)
                {
                    viewCameraOtherEye = new GameObject();
                    viewCameraOtherEye.name = "View Dependent Camera Right Eye";
                    viewCameraOtherEye.AddComponent<UnityVDRCamera>();
                    viewCameraOtherEye.GetComponent<UnityVDRCamera>().ApplyRenderTexture(renderTexture);
                    viewCameraOtherEye.GetComponent<UnityVDRCamera>().SetRenderMask(captureLayerString);
                    viewCameraOtherEye.transform.parent = this.transform;
                    viewCameraOtherEye.GetComponent<Camera>().stereoTargetEye = StereoTargetEyeMask.Right;

                    viewCamera.name = "View Dependent Camera Left Eye";
                    viewCamera.GetComponent<Camera>().stereoTargetEye = StereoTargetEyeMask.Left;

                }
            }

            if (viewAreas == null)
            {
                viewAreas = new GameObject("View Dependent Planes");
                viewAreas.transform.parent = this.transform;
            }

            if (captureArea == null)
            {
                captureArea = GameObject.CreatePrimitive(PrimitiveType.Plane);
                captureArea.name = "Capture Area";
                captureArea.transform.parent = viewAreas.transform;
                captureArea.layer = LayerMask.NameToLayer(captureLayerString);
                captureArea.GetComponent<MeshRenderer>().materials = new Material[0];

                if (baseSize)
                {
                    captureArea.transform.position = baseSize.transform.position;
                    captureArea.transform.rotation = baseSize.transform.rotation;
                    captureArea.transform.localScale = baseScale;
                }
            }

            if (renderArea == null)
            {
                renderArea = GameObject.CreatePrimitive(PrimitiveType.Plane);
                renderArea.name = "Render Area";
                renderArea.transform.parent = viewAreas.transform;
                renderArea.transform.localScale = new Vector3(renderArea.transform.localScale.x * -1, renderArea.transform.localScale.y, renderArea.transform.localScale.z * -1);
                renderArea.GetComponent<Renderer>().material = renderMaterial;
                renderArea.layer = LayerMask.NameToLayer(renderLayerString);

                if (baseSize)
                {
                    renderArea.transform.position = baseSize.transform.position;
                    renderArea.transform.rotation = baseSize.transform.rotation;
                    renderArea.transform.localScale = baseScale;
                }
            }
        }

#if UNITY_EDITOR
        if (!(captureArea.GetComponent<MeshFilter>().sharedMesh.ToString().Equals("Plane (UnityEngine.Mesh)")))
        {
            captureArea = null;
            EditorUtility.DisplayDialog("Invalid GameObject Attached", "View Dependent Operations Require a Plane Mesh", "OK");
            viewCamera.GetComponent<ViewCamera>().SetImagePlane(captureArea);

            if (useHMD)
                viewCameraOtherEye.GetComponent<ViewCamera>().SetImagePlane(captureArea);
        }
        else
        {
            viewCamera.GetComponent<ViewCamera>().SetImagePlane(captureArea);
            viewCameraOtherEye.GetComponent<ViewCamera>().SetImagePlane(captureArea);
        }

        if (!(renderArea.GetComponent<MeshFilter>().sharedMesh.ToString().Equals("Plane (UnityEngine.Mesh)")))
        {
            renderArea = null;
            EditorUtility.DisplayDialog("Invalid GameObject Attached", "View Dependent Operations Require a Plane Mesh", "OK");
            viewCamera.GetComponent<ViewCamera>().SetImagePlane(renderArea);
            viewCameraOtherEye.GetComponent<ViewCamera>().SetImagePlane(renderArea);

        }
#endif
    }
}

#if UNITY_EDITOR
    [CustomEditor(typeof(UnityVDRSceneManager))]
    [CanEditMultipleObjects]
    public class ViewDependentManagerEditor : UnityEditor.Editor
    {
        UnityVDRSceneManager script;

        void OnEnable()
        {
            script = (UnityVDRSceneManager)target;
        }

        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            DrawDefaultInspector();

            if (GUILayout.Button("Prepare Components"))
            {
                script.Bootstrap();
            }

            serializedObject.ApplyModifiedProperties();
        }
    }
#endif
