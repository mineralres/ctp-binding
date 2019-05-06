
#include "binding/popup_queue.h"
#include <stdio.h>
#include <iostream>

namespace pb
{
PopupQueue tradeQueue;
PopupQueue mdQueue;

int64_t PopupQueue::pop(CallingSession *s)
{
    // std::cout << "PopupQueue::pop before" << std::endl;
    std::unique_lock<std::mutex> lk(muBufferQueue);
    cvBufferQueue.wait(lk, [this] { return !bufferQueue.empty(); });
    const PopupMessage &msg = bufferQueue.front();
    if (msg.data.size() > BufferSize)
    {
        std::cout << "OUT OUT OUT OUT of buffer" << std::endl;
        return -1;
    }
    memcpy(s->outData, msg.data.data(), msg.data.size());
    s->outType = msg.type;
    s->outDataLen = msg.data.size();
    s->gospi = msg.gospi;
    bufferQueue.pop_front();
    lk.unlock();
    // std::cout << "PopupQueue::pop after" << std::endl;
    return 0;
}

int64_t PopupQueue::push(BindingMessageType t, const std::string &data, int64_t gospi)
{
    PopupMessage msg;
    msg.type = t;
    msg.data = data;
    msg.gospi = gospi;
    // std::cout << "PopupQueue::push before" << std::endl;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
	// std::cout << "PopupQueue::push after" << std::endl;
    return 0;
}
} // namespace pb
