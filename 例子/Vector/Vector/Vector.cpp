//
//  Vector.cpp
//  Vector
//
//  Created by 079 on 14-9-28.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include "Vector.h"

Vector::Vector()
{
    for (int i = 0; i < 100; i++) {
        rep[i] = i;
    }
}

int & Vector::operator[](int index)
{
    return rep[index];
}

ostream& operator<<(ostream &out,const Vector &v)
{
    for (int i = 0; i < 100; i++) {
        out<<v.rep[i]<<" ";
    }
    out<<endl;
    return out;
    
}