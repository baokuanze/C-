//
//  Fraction.cpp
//  abc
//
//  Created by 079 on 14-9-29.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include "Fraction.h"
const Fraction & Fraction::operator++()
{
    ++n;
    return *this;
}
const Fraction Fraction::operator++(int)
{
    Fraction old(*this);
    //n++;
    ++(*this);
    return old;
}
ostream& operator<<(ostream &out,const Fraction &f)
{
    out<<f.n<<endl;
    return out;
}