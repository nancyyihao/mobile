// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.3.1 by WSRD Tencent.
// Generated from `Notify.jce'
// **********************************************************************

package com.qq.taf.server.proxy;

public final class NotifyPrxHelper extends com.qq.taf.proxy.ServantProxy implements NotifyPrx
{

    public NotifyPrxHelper taf_hash(int hashCode)
    {
        super.taf_hash(hashCode);
        return this;
    }

    public java.util.Map __defaultContext()
    {
        java.util.HashMap _ctx = new java.util.HashMap();
        return _ctx;
    }

    protected String sServerEncoding = "GBK";
    public int setServerEncoding(String se){
        sServerEncoding = se;
        return 0;
    }

    public int getNotifyInfo(com.qq.taf.server.proxy.NotifyKey stKey, com.qq.taf.server.proxy.NotifyInfoHolder stInfo)
    {
        return getNotifyInfo(stKey, stInfo, __defaultContext());
    }

    @SuppressWarnings("unchecked")
    public int getNotifyInfo(com.qq.taf.server.proxy.NotifyKey stKey, com.qq.taf.server.proxy.NotifyInfoHolder stInfo, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(stKey, 1);
        if(stInfo.value != null)         _os.write(stInfo.value, 2);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        byte[] _returnSBuffer = taf_invoke("getNotifyInfo", _sBuffer, __ctx, status);

        com.qq.taf.jce.JceInputStream _is = new com.qq.taf.jce.JceInputStream(_returnSBuffer);
        _is.setServerEncoding(sServerEncoding);
        int _ret = 0;
        _ret = (int) _is.read(_ret, 0, true);
        stInfo.value = new com.qq.taf.server.proxy.NotifyInfo();
        stInfo.value = (com.qq.taf.server.proxy.NotifyInfo) _is.read(stInfo.value, 2, true);
        return _ret;
    }

    public void async_getNotifyInfo(com.qq.taf.server.proxy.NotifyPrxCallback callback, com.qq.taf.server.proxy.NotifyKey stKey)
    {
        async_getNotifyInfo(callback, stKey, __defaultContext());
    }

    public void async_getNotifyInfo(com.qq.taf.server.proxy.NotifyPrxCallback callback, com.qq.taf.server.proxy.NotifyKey stKey, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(stKey, 1);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        taf_invokeAsync(callback, "getNotifyInfo", _sBuffer, __ctx, status);

    }

    public void notifyServer(String sServerName, int level, String sMessage)
    {
        notifyServer(sServerName, level, sMessage, __defaultContext());
    }

    @SuppressWarnings("unchecked")
    public void notifyServer(String sServerName, int level, String sMessage, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(sServerName, 1);
        _os.write(level, 2);
        _os.write(sMessage, 3);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        byte[] _returnSBuffer = taf_invoke("notifyServer", _sBuffer, __ctx, status);

        com.qq.taf.jce.JceInputStream _is = new com.qq.taf.jce.JceInputStream(_returnSBuffer);
        _is.setServerEncoding(sServerEncoding);
        
    }

    public void async_notifyServer(com.qq.taf.server.proxy.NotifyPrxCallback callback, String sServerName, int level, String sMessage)
    {
        async_notifyServer(callback, sServerName, level, sMessage, __defaultContext());
    }

    public void async_notifyServer(com.qq.taf.server.proxy.NotifyPrxCallback callback, String sServerName, int level, String sMessage, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(sServerName, 1);
        _os.write(level, 2);
        _os.write(sMessage, 3);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        taf_invokeAsync(callback, "notifyServer", _sBuffer, __ctx, status);

    }

    public void reportServer(String sServerName, String sThreadId, String sMessage)
    {
        reportServer(sServerName, sThreadId, sMessage, __defaultContext());
    }

    @SuppressWarnings("unchecked")
    public void reportServer(String sServerName, String sThreadId, String sMessage, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(sServerName, 1);
        _os.write(sThreadId, 2);
        _os.write(sMessage, 3);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        byte[] _returnSBuffer = taf_invoke("reportServer", _sBuffer, __ctx, status);

        com.qq.taf.jce.JceInputStream _is = new com.qq.taf.jce.JceInputStream(_returnSBuffer);
        _is.setServerEncoding(sServerEncoding);
        
    }

    public void async_reportServer(com.qq.taf.server.proxy.NotifyPrxCallback callback, String sServerName, String sThreadId, String sMessage)
    {
        async_reportServer(callback, sServerName, sThreadId, sMessage, __defaultContext());
    }

    public void async_reportServer(com.qq.taf.server.proxy.NotifyPrxCallback callback, String sServerName, String sThreadId, String sMessage, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(sServerName, 1);
        _os.write(sThreadId, 2);
        _os.write(sMessage, 3);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        taf_invokeAsync(callback, "reportServer", _sBuffer, __ctx, status);

    }

}