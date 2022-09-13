using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;


/// <summary>
/// Unity View Dependent Rendering Camera.
/// Captures a perspective point of view on selected layers, rendering the output to a renderTexture.
/// An external tracker can be attached to update the camera's transform.
/// </summary>
[RequireComponent(typeof(Camera), typeof(ViewCamera))]
[ExecuteInEditMode]
public class UnityVDRCamera : MonoBehaviour
{
    public bool useTrackerForPose;
    public GameObject externalTracker;

    void OnValidate()
    {
        this.transform.position = useTrackerForPose ?
            externalTracker.transform.position : Vector3.zero + new Vector3(0, 5, 0);

        this.transform.rotation = useTrackerForPose ?
            externalTracker.transform.rotation : Quaternion.identity;
    }

    public void ApplyRenderTexture(RenderTexture renderTex)
    {
        this.GetComponent<Camera>().targetTexture = renderTex;
    }

    public void SetRenderMask(string layer)
    {
        this.GetComponent<Camera>().cullingMask = 1 << LayerMask.NameToLayer(layer);
    }

    void Update()
    {
        if (transform.hasChanged)
        {
            OnValidate();
        }
    }
}

#if UNITY_EDITOR
[CustomEditor(typeof(UnityVDRCamera))]
[CanEditMultipleObjects]
public class ViewDependentCameraEditor : UnityEditor.Editor
{
    UnityVDRCamera script;

    SerializedProperty editor_Tracker;
    SerializedProperty editor_UseTrackerForPose;

    void OnEnable()
    {
        script = (UnityVDRCamera)target;
        editor_Tracker = serializedObject.FindProperty("externalTracker");
        editor_UseTrackerForPose = serializedObject.FindProperty("useTrackerForPose");
    }

    public override void OnInspectorGUI()
    {
        serializedObject.Update();

        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.PropertyField(editor_UseTrackerForPose);
        EditorGUILayout.EndHorizontal();

        if (editor_UseTrackerForPose.boolValue)
        {
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.PropertyField(editor_Tracker);
            EditorGUILayout.EndHorizontal();
        }

        serializedObject.ApplyModifiedProperties();
    }
}
#endif

