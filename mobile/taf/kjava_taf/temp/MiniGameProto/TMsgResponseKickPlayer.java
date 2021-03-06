// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.1 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/MiniGameProto_new.jce'
// **********************************************************************

package MiniGameProto;

public final class TMsgResponseKickPlayer extends com.qq.taf.jce.JceStruct
{
    public String className()
    {
        return "MiniGameProto.TMsgResponseKickPlayer";
    }

    public short nResultID = (short)0;

    public int iKickedUin = (int)0;

    public String strReason = (String)"";

    public short getNResultID()
    {
        return nResultID;
    }

    public void  setNResultID(short nResultID)
    {
        this.nResultID = nResultID;
    }

    public int getIKickedUin()
    {
        return iKickedUin;
    }

    public void  setIKickedUin(int iKickedUin)
    {
        this.iKickedUin = iKickedUin;
    }

    public String getStrReason()
    {
        return strReason;
    }

    public void  setStrReason(String strReason)
    {
        this.strReason = strReason;
    }

    public TMsgResponseKickPlayer()
    {
    }

    public TMsgResponseKickPlayer(short nResultID, int iKickedUin, String strReason)
    {
        this.nResultID = nResultID;
        this.iKickedUin = iKickedUin;
        this.strReason = strReason;
    }

    public boolean equals(Object o)
    {
        TMsgResponseKickPlayer t = (TMsgResponseKickPlayer) o;
        return (
            com.qq.taf.jce.JceUtil.equals(nResultID, t.nResultID) && 
            com.qq.taf.jce.JceUtil.equals(iKickedUin, t.iKickedUin) && 
            com.qq.taf.jce.JceUtil.equals(strReason, t.strReason) );
    }

    public void writeTo(com.qq.taf.jce.JceOutputStream _os)
    {
        try
        {
            _os.write(nResultID, 0);
            _os.write(iKickedUin, 1);
            _os.write(strReason, 2);
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }

    public void readFrom(com.qq.taf.jce.JceInputStream _is)
    {
        try
        {
            nResultID = 0;
            nResultID = (short) _is.read(nResultID, 0, true);

            iKickedUin = 0;
            iKickedUin = (int) _is.read(iKickedUin, 1, true);

            strReason = "";
            strReason = (String) _is.read(strReason, 2, true);

        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }

    public void display(java.lang.StringBuffer _os, int _level)
    {
    }

}
