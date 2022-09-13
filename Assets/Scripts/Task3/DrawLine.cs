using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawLine : MonoBehaviour
{
    private LineRenderer lineRenderer;
    private int curveCount = 0;    
    private int layerOrder = 0;

    private static int SEGMENT_COUNT = 50;
    void Start()
    {
        lineRenderer  = this.GetComponent<LineRenderer>();
        Vector3[] points = new Vector3[lineRenderer.positionCount];
        lineRenderer.GetPositions(points);
        curveCount = (int)points.Length / 2;
        this.DrawCurve(points);
        // this.DrawSineWave(this.transform.localPosition,1,1);
    }

    void DrawCurve(Vector3[] points)
    {
        for (int j = 0; j <curveCount; j++)
        {
            for (int i = 1; i <= SEGMENT_COUNT; i++)
            {
                float t = i / (float)SEGMENT_COUNT;
                int nodeIndex = j * 2;
                Vector3 pixel = CalculateCubicBezierPoint(t, points[nodeIndex], points[nodeIndex + 1], points[nodeIndex + 2]);
                lineRenderer.positionCount = (((j * SEGMENT_COUNT) + i));
                Debug.Log(pixel);
                lineRenderer.SetPosition((j * SEGMENT_COUNT) + (i - 1), pixel);
            }
            
        }
    }
        
    Vector3 CalculateCubicBezierPoint(float t, Vector3 p0, Vector3 p1, Vector3 p2)
    {
        float u = 1 - t;
        float tt = t * t;
        float uu = u * u;
        float uuu = uu * u;
        float ttt = tt * t;

        
        Vector3 p = u*u*p0 + 2*t*u*p1 + t*t*p2;
        
        return p;
    }
    void DrawSineWave(Vector3 startPoint, float amplitude, float wavelength)
    {
        float x = 0f;
        float y;
        float k = 2 * Mathf.PI / wavelength;
        var lineRenderer = this.GetComponent<LineRenderer>();
        lineRenderer.positionCount = 100;
        for (int i = 0; i < lineRenderer.positionCount; i++)
        {
            x += i * 0.001f;
            y = amplitude * Mathf.Sin(k * x);
            lineRenderer.SetPosition(i, new Vector3(x, y, 0) + startPoint);
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
