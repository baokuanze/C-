//
//  Leaf2.h
//  Leaf
//
//  Created by 079 on 14-10-8.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Leaf__Leaf2__
#define __Leaf__Leaf2__

#include <iostream>
#include "Base.h"
using namespace std;
class Derived2:protected Base
{
public:
    Derived2(int i,int j,int k):Base(i,j,k){}
    void print()
    {
        cout<<getpriv();
        cout<<getprot();
        cout<<getpubl();
    }
};

class Leaf2:public Derived2
{
public:
    Leaf2(int i,int j,int k):Derived2(i,j,k){}
    void print()
    {
        cout<<getpriv();
        cout<<getprot();
        cout<<getpubl();
    }
};

#endif /* defined(__Leaf__Leaf2__) */
