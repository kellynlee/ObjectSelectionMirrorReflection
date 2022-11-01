using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Sockets;
using System;
using System.Net;


public class UDPSocket
{
    public UdpClient udpClient;


    IPEndPoint local;
    IPEndPoint remote;

    Queue<byte[]> messageQueue;

    public UDPSocket(NetworkSettings networkSettings)
    {
        this.remote = new IPEndPoint(IPAddress.Parse(networkSettings.remoteIP), Int32.Parse(networkSettings.remotePort));
        this.local = new IPEndPoint(IPAddress.Parse(networkSettings.listenIP), Int32.Parse(networkSettings.listenPort));

        this.messageQueue = new Queue<byte[]>();

        this.udpClient = new UdpClient(this.local);
    }

   
    public bool MsgAvailable()
    {
        return this.messageQueue.Count > 0 ? true : false;
    }

    public void ReceiveCallback(IAsyncResult asyncResult)
    {
        UdpClient client = (UdpClient)asyncResult.AsyncState;
        byte[] msgBytes = client.EndReceive(asyncResult, ref this.remote);
        this.messageQueue.Enqueue(msgBytes);
        client.BeginReceive(new AsyncCallback(ReceiveCallback), this.udpClient);
    }

    public void Listen()
    {
        Debug.Log("listen");
        this.udpClient.BeginReceive(new AsyncCallback(ReceiveCallback), this.udpClient);
    }

    public byte[] ReceiveMsg()
    {
        return this.messageQueue.Dequeue();
    }

    public void SendMessage(byte[] message)
    {
        this.udpClient.Send(message, message.Length, this.remote);
        Debug.Log("Message Send!");
    }
}