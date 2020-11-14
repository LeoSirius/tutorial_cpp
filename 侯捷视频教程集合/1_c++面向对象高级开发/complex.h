// complex.h
#ifndef __COMPLEX__
#define __COMPLEX__

#include <cmath>

class complex
{
public:
    complex (double r = 0, double i = 0)
      : re(r), im(i)
    {}
    complex& operator += (const complex&);   // 无{}的是声明
    double real () const { return re; }      // 有{}的是定义，这里的函数就是inline的，inline函数类似宏
    double imag () const { return im; }

    // 

private:
    double re, im;

    friend complex& __doapl (complex*, const complex&);
};

#endif