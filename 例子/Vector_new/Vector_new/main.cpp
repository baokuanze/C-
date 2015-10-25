//
//  main.cpp
//  Vector_new
//
//  Created by 079 on 14-9-29.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Vector.h"

int main(int argc, const char * argv[])
{
    int a1[5] = {1,2,3,4,5};
    int a2[10] = {1,2,3,4,5,6,7,8,9,10};
    
    Vector v1(5,a1),v2(10,a2);
    
    if (v1 == v2) {
        cout<<"v1 == v2"<<endl;
    }else{
        cout<<"v1 != v2"<<endl;
    }
    
    cout<<v1<<v2<<endl;
    
    v1 = v2;
    
    if (v1 == v2) {
        cout<<"v1 == v2"<<endl;
    }else{
        cout<<"v1 != v2"<<endl;
    }
    
    cout<<v1<<v2<<endl;
    
    v1[0] = 100;
    cout<<v1<<v2<<endl;
    
    Vector v3(v2);
    cout<<v3<<endl;

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

