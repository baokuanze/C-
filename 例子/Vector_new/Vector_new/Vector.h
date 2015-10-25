//
//  Vector.h
//  Vector_new
//
//  Created by 079 on 14-9-29.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Vector_new__Vector__
#define __Vector_new__Vector__

#include <iostream>
using namespace std;
class Vector
{
public:
    Vector(int s,int array[]);
    Vector(const Vector &v);
    ~Vector(){delete [] rep;rep = NULL;}
    int getSize() const {return size;}
    friend ostream & operator<<(ostream &out,const Vector &v);
    const int &operator[](int index)const {return rep[index];}
    int &operator[](int index) {return rep[index];}
    
    const Vector & operator=(const Vector &v);
    friend bool operator==(const Vector &v1,const Vector &v2);
private:
    int *rep;
    int size;
};

#endif /* defined(__Vector_new__Vector__) */
