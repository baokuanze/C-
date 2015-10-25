//
//  main.cpp
//  String
//
//  Created by 079 on 14-9-30.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "String.h"
void print(const String &s)
{
    cout<<s.rep<<endl;
}
int main(int argc, const char * argv[])
{
    String s("abc");
    print(s);
    print("aaa");
    
    String s1(s);
    print(s1);
    cout<<"////////////"<<endl;
    String b = "bad initialization";

    String c("bad initialization");
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

