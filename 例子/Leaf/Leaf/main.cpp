//
//  main.cpp
//  Leaf
//
//  Created by 079 on 14-10-8.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "leaf1.h"
#include "Leaf2.h"
#include "Leaf3.h"

int main(int argc, const char * argv[])
{
    Leaf1 l1(7,8,9);
    //cout<<l1.getpriv()<<endl;
    //cout<<l1.publ<<endl;
    cout<<l1.get11priv()<<endl;
    Derived1 d1(7,8,9);
    cout<<d1.get1priv()<<endl;
    Leaf2 l2(1, 2, 3);
    Leaf3 l3(4, 5, 6);
    
    l2.print();
    l3.print();
    cout<<endl;
    cout<<l3.publ<<endl;

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

