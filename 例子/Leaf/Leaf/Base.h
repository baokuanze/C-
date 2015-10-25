//
//  Base.h
//  Leaf
//
//  Created by 079 on 14-10-8.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Leaf__Base__
#define __Leaf__Base__

#include <iostream>
class Base
{
private:
    int priv;
protected:
    int prot;
    int getpriv() {return priv;}
public:
    Base(int i,int j,int k):priv(i),prot(j),publ(k){}
    int publ;
    int getprot() {return prot;}
    int getpubl() {return publ;}
    
};

#endif /* defined(__Leaf__Base__) */
