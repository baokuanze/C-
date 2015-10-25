//
//  main.cpp
//  Complex
//
//  Created by 079 on 14-9-28.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Complex.h"

int main(int argc, const char * argv[])
{

    Complex c1(5,5),c2(10,10);
    c1.print();
    c2.print();
    cout<<"=="<<endl;
    cout<<c1<<c2<<endl;
    cout<<"///////////////////"<<endl;
    (c1+c2).print();
    cout<<(c1+c2)<<endl;
    cout<<"///////////////////"<<endl;
    (c1-c2).print();
    cout<<(c1-c2)<<endl;
    cout<<"///////////////////"<<endl;
    (c1*c2).print();
    cout<<(c1*c2)<<endl;
    cout<<"///////////////////"<<endl;
    (c1/c2).print();
    cout<<(c1/c2)<<endl;
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

