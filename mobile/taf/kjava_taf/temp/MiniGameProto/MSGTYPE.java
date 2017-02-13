// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.1 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/MiniGameProto_new.jce'
// **********************************************************************

package MiniGameProto;

public final class MSGTYPE
{
    private static MSGTYPE[] __values = new MSGTYPE[5];
    private int __value;
    private String __T = new String();

    public static final int _MSGTYPE_NULL = 0;
    public static final MSGTYPE MSGTYPE_NULL = new MSGTYPE(_MSGTYPE_NULL,"MSGTYPE_NULL");
    public static final int _MSGTYPE_REQUEST = 1;
    public static final MSGTYPE MSGTYPE_REQUEST = new MSGTYPE(_MSGTYPE_REQUEST,"MSGTYPE_REQUEST");
    public static final int _MSGTYPE_RESPONSE = 2;
    public static final MSGTYPE MSGTYPE_RESPONSE = new MSGTYPE(_MSGTYPE_RESPONSE,"MSGTYPE_RESPONSE");
    public static final int _MSGTYPE_NOTIFY = 3;
    public static final MSGTYPE MSGTYPE_NOTIFY = new MSGTYPE(_MSGTYPE_NOTIFY,"MSGTYPE_NOTIFY");
    public static final int _MSGTYPE_NOTIFY_ACK = 4;
    public static final MSGTYPE MSGTYPE_NOTIFY_ACK = new MSGTYPE(_MSGTYPE_NOTIFY_ACK,"MSGTYPE_NOTIFY_ACK");

    public static MSGTYPE convert(int val)
    {
        for(int __i = 0; __i < __values.length; ++__i)
        {
            if(__values[__i].value() == val)
            {
                return __values[__i];
            }
        }
        return null;
    }

    public static MSGTYPE convert(String val)
    {
        for(int __i = 0; __i < __values.length; ++__i)
        {
            if(__values[__i].toString().equals(val))
            {
                return __values[__i];
            }
        }
        return null;
    }

    public int value()
    {
        return __value;
    }

    public String toString()
    {
        return __T;
    }

    private MSGTYPE(int val, String s)
    {
        __T = s;
        __value = val;
        __values[val] = this;
    }

}