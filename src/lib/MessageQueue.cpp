
#include "MessageQueue.h"

/* Implementation of class "MessageQueue" */
template <typename T>
T MessageQueue<T>::receive()
{
    // FP.5a : The method receive should use std::unique_lock<std::mutex> and _condition.wait() 
    // to wait for and receive new messages and pull them from the queue using move semantics. 
    // The received object should then be returned by the receive function. 
    
    std::unique_lock<std::mutex> uLock(_mutex);
    _condition.wait(uLock, [this] { return !_messages.empty(); });

    // remove last vector element from queue
    T msg = std::move(_messages.back());
    _messages.pop_back();

    return msg;
}

template <typename T>
void MessageQueue<T>::send(T &&msg)
{
    // FP.4a : The method send should use the mechanisms std::lock_guard<std::mutex> 
    // as well as _condition.notify_one() to add a new message to the queue and afterwards send a notification.
    std::lock_guard<std::mutex> uLock(_mutex);

    // add vector to queue
    _messages.clear(); // old notifications are invalid
    _messages.push_back(std::move(msg));
    _condition.notify_one(); // notify client after pushing new Vehicle into vector
}

template <typename T>
size_t MessageQueue<T>::size(){
    return _messages.size();
}