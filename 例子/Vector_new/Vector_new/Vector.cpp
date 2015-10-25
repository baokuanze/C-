//
//  Vector.cpp
//  Vector_new
//
//  Created by 079 on 14-9-29.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include "Vector.h"
Vector::Vector(int s,int array[]):rep(new int[s]),size(s)
{
    for (int i = 0; i < s; i++) {
        rep[i] = array[i];
    }
}

Vector::Vector(const Vector &v)
{
    size = v.size;
    rep = new int[size];
    for (int i = 0; i < size; i++) {
        rep[i] = v[i];
    }
}

const Vector & Vector::operator=(const Vector &v)
{
    size = v.size;
    if (this != &v) {
        delete [] rep;
        rep = new int[size];
        for (int i = 0; i < size; i++) {
            rep[i] = v.rep[i];
        }
    }
    return *this;
}

ostream & operator<<(ostream &out,const Vector &v)
{
    for (int i = 0; i < v.size; i++) {
        out<<v.rep[i]<<" ";
    }
    out<<endl;
    return out;
}
bool operator==(const Vector &v1,const Vector &v2)
{
    bool _bool = true;
    if (v1.getSize() != v2.getSize()) {
        _bool = false;
    }
    int index = 0;
    int s = v1.getSize();
    while (index < s && v1[index] == v2[index]) {
        ++index;
    }
    if (index < s) {
        _bool = false;
    }
    return _bool;
}