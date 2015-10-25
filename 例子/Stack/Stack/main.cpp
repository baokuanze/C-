//
//  main.cpp
//  Stack
//
//  Created by 079 on 14-10-14.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Stack.h"

int main(int argc, const char * argv[])
{
    int iArray[10] = {1,2,3,4,5,6,7,8,9,0};
    float fArray[10] = {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,1.0};
    char *cArray[10] = {"a","b","c","d","e","f","g","h","i","j"};
    Stack<> iStack;
    for (int i = 0; i < 10; i++) {
        iStack.push(cArray[i]);
    }
    
    iStack.printOn(cout);
    

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

