//
//  Derived.h
//  Base
//
//  Created by 079 on 14-10-8.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Base__Derived__
#define __Base__Derived__

#include <iostream>
#include "Base.h"
class Derived:public Base
{
private:
    int D_number;
    //int B_number;
public:
    Derived(int b,int d):Base(b),D_number(d){}
    void print()
    {
        Base::print();
        cout<<B_number<<endl;
        cout<<D_number<<endl;
    }
};

#endif /* defined(__Base__Derived__) */
