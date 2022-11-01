using System.Globalization;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Data;
public class DataLogger : MonoBehaviour
{
    // Start is called before the first frame update
    static public DataTable Task12Data;
    static public DataTable Task3Data;

    static public string participantNum = "";

    static public void CreateTable()
    {
        Task12Data = new DataTable("T1&T2");
        DataColumn dc;
        dc = new DataColumn("Participant", typeof(string));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("TaskNumber", typeof(int));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("Condition", typeof(int));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("Repetition", typeof(int));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("Time", typeof(float));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("Target_Position_X", typeof(float));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("Target_Position_Y", typeof(float));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("Target_Position_Z", typeof(float));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("Selection_Position_X", typeof(float));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("Selection_Position_Y", typeof(float));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("Selection_Position_Z", typeof(float));
        Task12Data.Columns.Add(dc);

        dc = new DataColumn("Distance", typeof(float));
        Task12Data.Columns.Add(dc);

        Task3Data = new DataTable("T3");
        DataColumn dc1;
        dc1 = new DataColumn("Participant", typeof(string));
        Task3Data.Columns.Add(dc1);

        dc1 = new DataColumn("Condition", typeof(int));
        Task3Data.Columns.Add(dc1);

        dc1 = new DataColumn("Repetition", typeof(int));
        Task3Data.Columns.Add(dc1);

        dc1 = new DataColumn("Render_Time", typeof(string));
        Task3Data.Columns.Add(dc1);

        dc1 = new DataColumn("Start_Time", typeof(string));
        Task3Data.Columns.Add(dc1);

        dc1 = new DataColumn("Current_Time", typeof(string));
        Task3Data.Columns.Add(dc1);

        dc1 = new DataColumn("Hit_Position_X", typeof(float));
        Task3Data.Columns.Add(dc1);

        dc1 = new DataColumn("Hit_Position_Y", typeof(float));
        Task3Data.Columns.Add(dc1);

        dc1 = new DataColumn("Hit_Position_Z", typeof(float));
        Task3Data.Columns.Add(dc1);
    }
    static public void Logger12(string participant, int task, int condition,int rep, int time, Vector3 target, Vector3 selection, float distance)
    {
        DataRow dr = Task12Data.NewRow();
        dr[0] = participant;
        dr[1] = task;
        dr[2] = condition;
        dr[3] = rep;
        dr[4] = time;
        dr[5] = target.x;
        dr[6] = target.y;
        dr[7] = target.z;
        dr[8] = selection.x;
        dr[9] = selection.y;
        dr[10] = selection.z;
        dr[11] = distance;

        Task12Data.Rows.Add(dr);
        Debug.Log("data logged");
    }

    static public void Logger3(string participant, int condition,int rep, string renderTime,string startTime, string currentTime, Vector3 hit ) {
        DataRow dr1 = Task3Data.NewRow();
        dr1[0] = participant;
        dr1[1] = condition;
        dr1[2] = rep;
        dr1[3] = renderTime;
        dr1[4] = startTime;
        dr1[5] = currentTime;
        dr1[6] = hit.x;
        dr1[7] = hit.y;
        dr1[8] = hit.z;
        Task3Data.Rows.Add(dr1);
        Debug.Log("data logged");
    }
}
