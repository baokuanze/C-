//
//  Base.h
//  Base
//
//  Created by 079 on 14-10-8.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Base__Base__
#define __Base__Base__

#include <iostream>
using namespace std;
class Base
{
public:
    int B_number;
public:
    Base(int i):B_number(i){}
    void print()
    {
        cout<<B_number<<endl;
    }
    int getB()
    {
        return B_number;
    }
};

#endif /* defined(__Base__Base__) */
