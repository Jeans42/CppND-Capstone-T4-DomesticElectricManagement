
#ifndef MESSAGEQUEUE_H
#define MESSAGEQUEUE_H

#include <mutex>
#include <deque>
#include <condition_variable>

template <class T>
class MessageQueue
{
public:
    void send(T &&msg);
    T receive();
    size_t size();
    
private:
    std::mutex _mutex;
    std::condition_variable _condition;
    std::deque<T> _messages;
};
#endif