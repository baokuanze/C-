//
//  Fraction.h
//  abc
//
//  Created by 079 on 14-9-29.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __abc__Fraction__
#define __abc__Fraction__

#include <iostream>
using namespace std;
class Fraction
{
public:
    Fraction(int x = 0):n(x){}
    const Fraction & operator++();
    const Fraction operator++(int);
    friend ostream& operator<<(ostream &out,const Fraction &f);
private:
    int n;
};

#endif /* defined(__abc__Fraction__) */
