// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3.
// Generated from `Msg.jce'
// **********************************************************************

#include "Msg.h"
#include "jce/wup.h"
#include "servant/BaseF.h"

using namespace wup;

namespace QUAN
{

    taf::Int32 MsgProxy::addMsg(const QUAN::AddMsgReq &tReq, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"addMsg", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void Msg::async_response_addMsg(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void MsgProxy::async_addMsg(MsgPrxCallbackPtr callback,const QUAN::AddMsgReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"addMsg", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 MsgProxy::atMsg(const QUAN::AtMsgReq &tReq, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"atMsg", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void Msg::async_response_atMsg(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void MsgProxy::async_atMsg(MsgPrxCallbackPtr callback,const QUAN::AtMsgReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"atMsg", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 MsgProxy::bindMsg(const QUAN::BindMsgReq &tReq, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"bindMsg", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void Msg::async_response_bindMsg(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void MsgProxy::async_bindMsg(MsgPrxCallbackPtr callback,const QUAN::BindMsgReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"bindMsg", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 MsgProxy::changeMsgStatus(const QUAN::ChangeMsgReq &tReq, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"changeMsgStatus", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void Msg::async_response_changeMsgStatus(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void MsgProxy::async_changeMsgStatus(MsgPrxCallbackPtr callback,const QUAN::ChangeMsgReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"changeMsgStatus", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 MsgProxy::cleanCache(const vector<taf::Int64> &tUserId, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tUserId, 1);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"cleanCache", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void Msg::async_response_cleanCache(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void MsgProxy::async_cleanCache(MsgPrxCallbackPtr callback,const vector<taf::Int64> &tUserId,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tUserId, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"cleanCache", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 MsgProxy::getMsgNum(const QUAN::GetMsgNumReq &tReq, QUAN::GetMsgNumRsp &tRsp, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        _os.write(tRsp, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"getMsgNum", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(tRsp, 2, true);
        return _ret;
    }

    void Msg::async_response_getMsgNum(taf::JceCurrentPtr current, taf::Int32 _ret, const QUAN::GetMsgNumRsp &tRsp)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("tRsp", tRsp);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(tRsp, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void MsgProxy::async_getMsgNum(MsgPrxCallbackPtr callback,const QUAN::GetMsgNumReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"getMsgNum", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 MsgProxy::getPushMsg(const QUAN::PushMsgReq &tReq, QUAN::PushMsgRsp &tRsp, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        _os.write(tRsp, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"getPushMsg", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(tRsp, 2, true);
        return _ret;
    }

    void Msg::async_response_getPushMsg(taf::JceCurrentPtr current, taf::Int32 _ret, const QUAN::PushMsgRsp &tRsp)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("tRsp", tRsp);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(tRsp, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void MsgProxy::async_getPushMsg(MsgPrxCallbackPtr callback,const QUAN::PushMsgReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"getPushMsg", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 MsgProxy::test(const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"test", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void Msg::async_response_test(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void MsgProxy::async_test(MsgPrxCallbackPtr callback,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"test", _os.getByteBuffer(), context, _mStatus, callback);
    }

    MsgProxy* MsgProxy::taf_hash(int64_t key)
    {
        return (MsgProxy*)ServantProxy::taf_hash(key);
    }

    static ::std::string __QUAN__Msg_all[]=
    {
        "addMsg",
        "atMsg",
        "bindMsg",
        "changeMsgStatus",
        "cleanCache",
        "getMsgNum",
        "getPushMsg",
        "test"
    };

    int MsgPrxCallback::onDispatch(taf::ReqMessagePtr msg)
    {
        pair<string*, string*> r = equal_range(__QUAN__Msg_all, __QUAN__Msg_all+8, msg->request.sFuncName);
        if(r.first == r.second) return taf::JCESERVERNOFUNCERR;
        switch(r.first - __QUAN__Msg_all)
        {
            case 0:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_addMsg_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_addMsg(_ret);
                return taf::JCESERVERSUCCESS;

            }
            case 1:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_atMsg_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_atMsg(_ret);
                return taf::JCESERVERSUCCESS;

            }
            case 2:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_bindMsg_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_bindMsg(_ret);
                return taf::JCESERVERSUCCESS;

            }
            case 3:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_changeMsgStatus_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_changeMsgStatus(_ret);
                return taf::JCESERVERSUCCESS;

            }
            case 4:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_cleanCache_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_cleanCache(_ret);
                return taf::JCESERVERSUCCESS;

            }
            case 5:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_getMsgNum_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                QUAN::GetMsgNumRsp tRsp;
                _is.read(tRsp, 2, true);
                callback_getMsgNum(_ret, tRsp);
                return taf::JCESERVERSUCCESS;

            }
            case 6:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_getPushMsg_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                QUAN::PushMsgRsp tRsp;
                _is.read(tRsp, 2, true);
                callback_getPushMsg(_ret, tRsp);
                return taf::JCESERVERSUCCESS;

            }
            case 7:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_test_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_test(_ret);
                return taf::JCESERVERSUCCESS;

            }
        }
        return taf::JCESERVERNOFUNCERR;
    }

    int Msg::onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer)
    {
        pair<string*, string*> r = equal_range(__QUAN__Msg_all, __QUAN__Msg_all+8, _current->getFuncName());
        if(r.first == r.second) return taf::JCESERVERNOFUNCERR;
        switch(r.first - __QUAN__Msg_all)
        {
            case 0:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::AddMsgReq tReq;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                }
                else
                {
                    _is.read(tReq, 1, true);
                }
                taf::Int32 _ret = addMsg(tReq, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 1:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::AtMsgReq tReq;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                }
                else
                {
                    _is.read(tReq, 1, true);
                }
                taf::Int32 _ret = atMsg(tReq, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 2:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::BindMsgReq tReq;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                }
                else
                {
                    _is.read(tReq, 1, true);
                }
                taf::Int32 _ret = bindMsg(tReq, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 3:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::ChangeMsgReq tReq;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                }
                else
                {
                    _is.read(tReq, 1, true);
                }
                taf::Int32 _ret = changeMsgStatus(tReq, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 4:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                vector<taf::Int64> tUserId;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tUserId", tUserId);
                }
                else
                {
                    _is.read(tUserId, 1, true);
                }
                taf::Int32 _ret = cleanCache(tUserId, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 5:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::GetMsgNumReq tReq;
                QUAN::GetMsgNumRsp tRsp;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                    tafAttr.getByDefault("tRsp", tRsp, tRsp);
                }
                else
                {
                    _is.read(tReq, 1, true);
                    _is.read(tRsp, 2, false);
                }
                taf::Int32 _ret = getMsgNum(tReq,tRsp, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("tRsp", tRsp);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(tRsp, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 6:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::PushMsgReq tReq;
                QUAN::PushMsgRsp tRsp;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                    tafAttr.getByDefault("tRsp", tRsp, tRsp);
                }
                else
                {
                    _is.read(tReq, 1, true);
                    _is.read(tRsp, 2, false);
                }
                taf::Int32 _ret = getPushMsg(tReq,tRsp, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("tRsp", tRsp);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(tRsp, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 7:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                }
                else
                {
                }
                taf::Int32 _ret = test(_current);                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
        }
        return taf::JCESERVERNOFUNCERR;
    }


}

