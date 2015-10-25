//
//  main.cpp
//  dummy
//
//  Created by 079 on 14-9-25.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;

void dummy();

int main(int argc, const char * argv[])
{

    dummy();
    dummy();
    dummy();
    dummy();
    dummy();
    dummy();
    dummy();
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

void dummy()
{
    static int x;
    
    int a = 0;
    
    //cout<<"x = "<<x<<"  a = "<<a<<endl;
    
    x++;
    a++;
    
    cout<<"x = "<<x<<"  a = "<<a<<endl;
    
    cout<<"/////////////////////"<<endl;
}

