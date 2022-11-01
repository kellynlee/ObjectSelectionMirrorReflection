using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;

public class UDPController : MonoBehaviour
{
    private NetworkSettings networkSettings;
    UDPSocket socket;
    public List<GameObject> bodySphere;
    
    private void Awake()
    {
        this.networkSettings = GameObject.Find("NetworkSettings").GetComponent<NetworkSettings>();
    }

    // Start is called before the first frame update
    void Start()
    {
        this.socket = new UDPSocket(this.networkSettings);    
        this.socket.Listen();
    }

    // Update is called once per frame
    void Update()
    {
        this.CheckAndReadMessage();
    }
    void CheckAndReadMessage()
    {
        if (this.socket.MsgAvailable())
        {
            MessageReceivedHandler(this.socket.ReceiveMsg());
        }
    }

    void MessageReceivedHandler(byte[] serializedMsg)
    {
        //deserialize and process serializedMsg
        JsonMessage jm = Serializer.Deserialize<JsonMessage>(serializedMsg);
        if(jm.message is CreateMessage)
        {
            
        }
        if (jm.message is ManipulateMessage)
        {
            
        }
        if(jm.message is CalibrationDoneMessage)
        {
            
        }

    }

    /// <summary>
    /// Sends a message to the HoloLens to create an object using prefab with Name = prefabName 
    /// the id of this obj = id
    /// the obj is created in position = position
    /// the obj direction (blue axis) = forward
    /// the obj upward (green axis) = upward
    /// </summary>
    /// <param name="prefabName"></param>
    /// <param name="id"></param>
    /// <param name="position"></param>
    /// <param name="forward"></param>
    /// <param name="upward"></param>
    public void SendCreateMessage(bool isBodyAnchored, string prefabName, int id, Vector3 position, Vector3 forward, Vector3 upward)
    {
        JsonMessage jm = new JsonMessage();
        jm.action = JsonMessage.Type.CREATE;
        CreateMessage createMsg = new CreateMessage();
        createMsg.isBodyAnchored = isBodyAnchored;
        createMsg.prefabName = prefabName;
        createMsg.id = id;
        createMsg.position = position;
        createMsg.forward = forward;
        createMsg.upward = upward;
        jm.message = createMsg;
        byte[] msg = Serializer.Serialize<JsonMessage>(jm);
        this.socket.SendMessage(msg);
    }

    /// <summary>
    /// Sends a message to the HoloLens to update the position and rotation of the object with id = id
    /// </summary>
    /// <param name="id"></param>
    /// <param name="position"></param>
    /// <param name="forward"></param>
    /// /// <param name="upward"></param>
    public void SendManipulateMessage(int id, Vector3 position, Vector3 forward, Vector3 upward)
    {
        JsonMessage jm = new JsonMessage();
        jm.action = JsonMessage.Type.MANIPULATE;
        ManipulateMessage manipulateMsg = new ManipulateMessage();
        manipulateMsg.id = id;
        manipulateMsg.position = position;
        manipulateMsg.forward = forward;
        manipulateMsg.upward = upward;
        jm.message = manipulateMsg;
        byte[] msg = Serializer.Serialize<JsonMessage>(jm);
        this.socket.SendMessage(msg);
    }

    // <summary>
    /// Sends a message to confirm calibration is done
    /// </summary>
    public void SendCalibrationDoneMessage()
    {
        JsonMessage jm = new JsonMessage();
        jm.action = JsonMessage.Type.CALIBRATION_DONE;
        CalibrationDoneMessage cd = new CalibrationDoneMessage();
        jm.message = cd;
        byte[] msg = Serializer.Serialize<JsonMessage>(jm);
        this.socket.SendMessage(msg);
    }

    public void SendDataLoggingMessage()
    {
        JsonMessage jm = new JsonMessage();
        jm.action = JsonMessage.Type.DATA_LOGGING;
        DataLoggingMessage dlm = new DataLoggingMessage();
        dlm.message = "connected!";
        jm.message = dlm;
        byte[] msg = Serializer.Serialize<JsonMessage>(jm);
        this.socket.SendMessage(msg);
        Debug.Log("connect to PC");
    }

    /*
    void MessageReceivedHandler(byte[] serializedMsg)
    {
        JsonMessage jm = Serializer.Deserialize<JsonMessage>(serializedMsg);
        if (jm.messageObject is TestEntity)
        {
            
        }
        if (jm.messageObject is PostItContent)
        {
            

            this.postItContents.Add((PostItContent)jm.messageObject);
        }
        if (jm.messageObject is PostItNumber)
        {
            if (this.postItContents.Count != ((PostItNumber)jm.messageObject).number)
            {
                StartCoroutine(this.sceneController.Quit("Received " + this.postItContents.Count + "/" + ((PostItNumber)jm.messageObject).number));
            }
        }
        if (jm.messageObject is PostItVal)
        {
            
        }
        if (jm.messageObject is PostItValList)
        {
           
        }
        if (jm.messageObject is ActionMap)
        {
            this.sceneController.ExecuteAction((ActionMap)jm.messageObject);
        }
        if (jm.messageObject is ActionMapList)
        {
            this.sceneController.ExecuteActions((ActionMapList)jm.messageObject);
        }
        if (jm.messageObject is WhiteBoardPostItMap)
        {
            this.sceneController.ClusterColorPostIt((WhiteBoardPostItMap)jm.messageObject);
        }
        if (jm.messageObject is WhiteBoardPostItMapList)
        {
            this.sceneController.ClusterColorPostIts((WhiteBoardPostItMapList)jm.messageObject);
        }
    }
    */


    /*
    /// <summary>
    /// Used to send the initial message to start the experience
    /// </summary>
    public void SendStartMsg()
    {
#if !UNITY_EDITOR
        JsonMessage jmStart = new JsonMessage();
        jmStart.messageType = "Start";
        jmStart.messageObject = null;
        byte[] msg = Serializer.Serialize<JsonMessage>(jmStart);
        this.listenSocket.SendMessage(msg);
#endif
    }

    /// <summary>
    /// Used to send the last message to end the experience and record the completion time
    /// </summary>
    public void SendEndMsg(float completionTime)
    {
#if !UNITY_EDITOR
        JsonMessage jm = new JsonMessage();
        jm.messageType = "Completed";

        CompletionTime ct = new CompletionTime();
        ct.completionTime = completionTime;
        
        jm.messageObject = ct;

        byte[] msg = Serializer.Serialize<JsonMessage>(jm);
        this.listenSocket.SendMessage(msg);
#endif
    }

    /// <summary>
    /// Sends a snapshot of the observation space.
    /// </summary>
    /// <param name="pList">List of all the variables related to the post it gameobjects</param>
    public void SendObsRL(PostItValList pList)
    {
#if !UNITY_EDITOR
        //sending the whole list does not seem to work as only a part of it is received on the script    

        foreach(PostItVal pVal in pList.values)
        {
            JsonMessage jm = new JsonMessage();
            jm.messageType = "PostItVal";
            jm.messageObject = pVal;
            byte[] msg = Serializer.Serialize<JsonMessage>(jm);
            this.listenSocket.SendMessage(msg);
        }


#endif
    }

    /// <summary>
    /// Sends a list of whiteboards with respectively attached post it notes
    /// </summary>
    /// <param name="wbMapList">list of (whiteboard id, postIt Id) representing the attached postIt to the whiteBoad</param>
    public void SendObsCluster(WhiteBoardPostItMapList wbMapList)
    {
#if !UNITY_EDITOR
        foreach(WhiteBoardPostItMap wbPostItMap in wbMapList.values)
        {
            JsonMessage jm = new JsonMessage();
            jm.messageType = "WhiteBoardPostItMap";
            jm.messageObject = wbPostItMap;
            byte[] msg = Serializer.Serialize<JsonMessage>(jm);
            this.listenSocket.SendMessage(msg);
        }

#endif
    }

    public List<PostItContent> GetPostItContents()
    {
        return this.postItContents;
    }

    public SceneController.METHOD getMethod()
    {
        return this.networkSettings.method;
    }
    */
}