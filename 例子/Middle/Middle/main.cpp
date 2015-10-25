//
//  main.cpp
//  Middle
//
//  Created by 079 on 14-10-13.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
float divide(int a,int b)
{
    if (b == 0) {
        throw "b == 0";
    }
    return (float)a/(float)b;
}

float middle(int a,int b)
{
    try {
        return divide(a, b);
    } catch (const char *str) {
        cout<<"error in middle"<<endl;
        throw str;
    }
}

void func(int a,int b)
{
    try {
        middle(a, b);
    } catch (const char *error) {
        cout<<"error in func"<<endl;
        cout<<error<<endl;
    }
}

int main(int argc, const char * argv[])
{
    int a = 10;
    int b = 0;
    
    cin>>b;
    
    func(a, b);

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

