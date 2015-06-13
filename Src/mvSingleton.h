#ifndef SINGLETON_H
#define SINGLETON_H

#include <memory>
#include <mutex>

template<typename T>
class Singleton
{
private:
    typedef T* pointer;
    static std::unique_ptr<T> m_singleton;
    static std::mutex m_lock;

public:
	virtual ~Singleton(){}

    template<typename ..._Args>
    static pointer GetInstance(_Args...args) {
		if (nullptr == m_singleton.get()) {
            m_lock.lock();
            if (nullptr == m_singleton.get()) {
                m_singleton.reset(new T(args...));
            }
            m_lock.unlock();
		}
		return m_singleton.get();
	}

protected:
    Singleton(){}
    Singleton(const Singleton&);
    Singleton& operator = (const Singleton&);
};

template<typename T>
std::unique_ptr<T> Singleton<T>::m_singleton;
template<typename T>
std::mutex Singleton<T>::m_lock;

#endif
