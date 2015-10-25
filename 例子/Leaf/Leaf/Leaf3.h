//
//  Leaf3.h
//  Leaf
//
//  Created by 079 on 14-10-8.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Leaf__Leaf3__
#define __Leaf__Leaf3__

#include <iostream>
#include "Base.h"
using namespace std;
class Derived3: public Base
{
public:
    Derived3(int i,int j,int k):Base(i,j,k){}
    void print()
    {
        //cout<<priv<<endl;
        cout<<getpriv();
        cout<<getprot();
        cout<<getpubl();
    }
};

class Leaf3 : public Derived3
{
public:
    Leaf3(int i,int j,int k):Derived3(i,j,k){}
    void print()
    {
        cout<<getpriv();
        cout<<getprot();
        cout<<getpubl();
    }
};

#endif /* defined(__Leaf__Leaf3__) */
