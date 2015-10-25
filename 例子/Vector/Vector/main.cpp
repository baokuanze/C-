//
//  main.cpp
//  Vector
//
//  Created by 079 on 14-9-28.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Vector.h"

int main(int argc, const char * argv[])
{
    Vector v1,v2;
    
    cout<<v1<<endl;
    cout<<v1[0]<<v1[1]<<endl;

    for (int i = 0; i < 100; i++) {
        v1[i] = i+1;
    }
    cout<<v1<<endl;
    v2 = v1;
    
    v1[1] = 100;
    cout<<v2<<endl;
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

