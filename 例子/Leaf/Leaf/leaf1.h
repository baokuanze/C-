//
//  leaf1.h
//  Leaf
//
//  Created by 079 on 14-10-8.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Leaf__leaf1__
#define __Leaf__leaf1__

#include <iostream>
#include "Base.h"
class Derived1:private Base
{
public:
    Derived1(int i,int j,int k):Base(i,j,k){}
    int get1priv() {return getpriv();}
};

class Leaf1:public Derived1
{
/*private:
    int priv;
private:
    int prot;
    int getpriv() {return priv;}
private:
    Base(int i,int j,int k):priv(i),prot(j),publ(k){}
    int publ;
    int getprot() {return prot;}
    int getpubl() {return publ;}*/
public:
    Leaf1(int i,int j,int k):Derived1(i,j,k){}
    int get11priv() {return get1priv();}
};

#endif /* defined(__Leaf__leaf1__) */
