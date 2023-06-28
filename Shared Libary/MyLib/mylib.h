#ifndef MYLIB_H
#define MYLIB_H

#include "MyLib_global.h"

class MYLIB_EXPORT MyLib
{
public:
    MyLib();

    template<typename T>
    T max(T t1, T t2)
    {
        if(t1 > t2)return t1;
        else
            return t2;
    }
    template<typename T>
    T min(T t1, T t2)
    {
        if(t1 < t2)return t1;
        else
            return t2;
    }
};

#endif // MYLIB_H
