//
//

#ifndef POPUP_QUEUE
#define POPUP_QUEUE

#include "binding/session.h"
#include "pb/binding.pb.h"

const size_t BufferSize = 1024 * 1024;

namespace pb
{
struct PopupMessage
{
    uint32_t type;
    std::string data;
    int64_t gospi;
};

struct PopupQueue
{
    std::deque<PopupMessage> bufferQueue;
    std::mutex muBufferQueue;
    std::condition_variable cvBufferQueue;
    int64_t pop(CallingSession *);
    int64_t push(BindingMessageType, const std::string&, int64_t gospi);
};

extern PopupQueue tradeQueue;
extern PopupQueue mdQueue;

} // namespace pb

#endif