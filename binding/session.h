//
//

#ifndef SESSIONX_
#define SESSIONX_

#include <thread>
#include <mutex>
#include <deque>
#include <cstdint>
#include <condition_variable>

#pragma pack(1)
struct CallingSession
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

namespace pb
{

} // namespace pb

#endif