//
//  Complex.h
//  Complex
//
//  Created by 079 on 14-9-28.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Complex__Complex__
#define __Complex__Complex__

#include <iostream>
using namespace std;
class Complex
{
public:
    Complex():_r(0),_i(0){}
    Complex(float r,float i):_r(r),_i(i){}
    
    void print() const
    {
        cout<<"R = "<<_r<<" I = "<<_i<<endl;
    }
    float getR() const
    {
        return _r;
    }
    float getI() const
    {
        return _i;
    }
    
public:
    friend Complex operator+(const Complex & x,const Complex & y);
    friend Complex operator-(const Complex & x,const Complex & y);
    friend Complex operator*(const Complex & x,const Complex & y);
    friend Complex operator/(const Complex & x,const Complex & y);
    friend ostream & operator<<(ostream &out,const Complex & x);
private:
    float _r;
    float _i;
};

inline Complex operator+(const Complex & x,const Complex & y)
{
    return Complex((x._r + y._r),(x._i + y._i));
}
inline Complex operator-(const Complex & x,const Complex & y)
{
    return Complex((x._r - y._r),(x._i - y._i));
}
inline Complex operator*(const Complex & x,const Complex & y)
{
    return Complex((x._r * y._r),(x._i * y._i));
}
inline Complex operator/(const Complex & x,const Complex & y)
{
    return Complex((x._r / y._r),(x._i / y._i));
}
inline ostream & operator<<(ostream &out,const Complex & x)
{
    out<<"R = "<<x._r<<" I = "<<x._i<<endl;
    return out;
}

#endif /* defined(__Complex__Complex__) */
