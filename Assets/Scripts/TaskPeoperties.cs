using System;
public class TaskProperties {
    private Boolean mirrorPosSetting;
    //Perspective property, true for 1pp, false for 2pp
    private Boolean perspective;

    //Modality property, true for manual, false for remote
    private Boolean modality;

    //Visibility property, true for double, false for single

    private Boolean visibility;

    private int taskNumber;

    private int t1Rep;

    private int t2Rep;

    private string taskName;

    private int subTas;

    public Boolean Perspective {
        get {
            return perspective;
        }
        set {
            perspective = value;
        }
    }

    public Boolean Modality {
        get {
            return modality;
        }
        set {
            modality = value;
        }
    }

    public Boolean Visibility {
        get {
            return visibility;
        }
        set {
            visibility = value;
        }
    }

    public Boolean MirrorPosSetting {
        get {
            return this.mirrorPosSetting;
        }
        set {
            mirrorPosSetting = value;
        }
    }

    public int TaskNumber {
        get {
            return this.taskNumber;
        }
        set {
            taskNumber = value;
        }
    }

    public string TaskName {
        get {
            return this.taskName;
        }
        set {
            taskName = value;
        }
    }

    public int T1Rep {
        get {
            return this.t1Rep;
        }
        set {
            t1Rep = value;
        }
    }

    public int T2Rep {
        get {
            return this.t2Rep;
        }
        set {
            t2Rep = value;
        }
    }

    public int SubTask {
        get {
            return this.subTas;
        }
        set {
            subTas = value;
        }
    }
}