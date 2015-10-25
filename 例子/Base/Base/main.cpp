//
//  main.cpp
//  Base
//
//  Created by 079 on 14-10-8.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Derived.h"

int main(int argc, const char * argv[])
{
    Base b(1);
    Derived d(2,3);
    
    //cout<<B_number;
    
    b.print();
    
    d.print();
    
    d.Base::print();

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

