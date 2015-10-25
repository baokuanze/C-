//
//  main.cpp
//  abc
//
//  Created by 079 on 14-9-29.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Fraction.h"

int main(int argc, const char * argv[])
{
    Fraction a(1),b(1);
    
    cout<<a++<<++b<<endl;
    cout<<a<<b<<endl;

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

