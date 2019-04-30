// (C) Copyright xiaobing 2020.8
//
// xiaobingpang@qq.com
//
//
// This file was created by xiaobing.
//

#include <thread>
#include <mutex>
#include <deque>
#include <cstdint>
#include <condition_variable>

#ifndef BIND_API
#define BIND_API extern "C" __declspec(dllexport)
#else
#define BIND_API extern "C" __declspec(dllimport)
#endif

namespace pb
{
class spi;
class mdspi;
}; // namespace pb

const size_t BufferSize = 1024 * 1024;

#pragma pack(1)
struct Session
{
    void *goapi;
    int64_t gospi;
    void *cppapi;
    void *cppspi;

    uint64_t inType;
    char *inData;
    uint64_t inDataLen;
    int64_t inParam1;

    uint64_t outType;
    char *outData;
    uint64_t outDataLen;
};

struct PopupMessage
{
    uint32_t type;
    std::string data;
    int64_t gospi;
};

// CTP相关
BIND_API int CTP_Trade_Call(Session *s);
BIND_API int CTP_Trade_PopMessage(Session *in);
BIND_API int CTP_MD_Call(Session *s);
BIND_API int CTP_MD_PopMessage(Session *in);

struct PopupQueue
{
    std::deque<PopupMessage> bufferQueue;
    std::mutex muBufferQueue;
    std::condition_variable cvBufferQueue;
    int64_t pop(Session*);
};

PopupQueue tradeQueue;
PopupQueue mdQueue;

namespace pb
{

} // namespace pb
