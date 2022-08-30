using System;
public class TaskProperties {
    private Boolean mirrorPosSetting;
    //Perspective property, true for 1pp, false for 2pp
    private Boolean perspective;

    //Modality property, true for manual, false for remote
    private Boolean modality;

    //Visibility property, true for double, false for single

    private Boolean visibility;

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
}