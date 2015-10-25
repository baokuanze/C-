//
//  main.cpp
//  Item
//
//  Created by 079 on 14-9-30.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Item.h"

int main(int argc, const char * argv[])
{
    Item i1[2] = {Item("aaa",1),Item("bbb",2)};
    Item i2[3] = {"ccc","ddd","eee"};
    Item i3[2];
    
    for (int i = 0; i < 2; i++) {
        cout<<i1[i];
    }
    for (int i = 0; i < 3; i++) {
        cout<<i2[i];
    }
    for (int i = 0; i < 2; i++) {
        i3[i].setItem("i3", i);
        cout<<i3[i];
    }

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

