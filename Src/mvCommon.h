#ifndef MVCOMMON_H
#define MVCOMMON_H

namespace mv {
#ifndef interface
#define interface class
#endif

class Util {
public:
    template<typename T>
    static inline void Delete(T* &p) {
        delete p;
        p = nullptr;
    }

    template<typename T>
    static inline void DeleteArray(T* &p) {
        delete[] p;
        p = nullptr;
    }
};
}

#endif