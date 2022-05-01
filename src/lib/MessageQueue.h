
#ifndef MESSAGEQUEUE_H
#define MESSAGEQUEUE_H

#include <mutex>
#include <deque>
#include <condition_variable>

template <class T>
class MessageQueue
{
public:
    void send(T &&msg) {
        std::lock_guard<std::mutex> uLock(_mutex);

        // add vector to queue
        _messages.push_back(std::move(msg));
        _condition.notify_one();
    };

    T receive() {
        std::unique_lock<std::mutex> uLock(_mutex);
        _condition.wait(uLock, [this] { return !_messages.empty(); });

        // remove last vector element from queue
        T msg = std::move(_messages.back());
        _messages.pop_back();

        return msg;
    };
    size_t size() {
        return _messages.size();
    };
    
private:
    std::mutex _mutex;
    std::condition_variable _condition;
    std::deque<T> _messages;
};
#endif