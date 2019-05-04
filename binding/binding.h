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
#include "binding/session.h"
#include "binding/popup_queue.h"

#ifndef BIND_API
#define BIND_API extern "C" __declspec(dllexport)
#else
#define BIND_API extern "C" __declspec(dllimport)
#endif

// CTP相关
BIND_API int CTP_Trade_Call(CallingSession *s);
BIND_API int CTP_Trade_PopMessage(CallingSession *in);
BIND_API int CTP_MD_Call(CallingSession *s);
BIND_API int CTP_MD_PopMessage(CallingSession *in);

namespace pb
{

} // namespace pb
