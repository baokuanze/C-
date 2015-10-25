//
//  main.cpp
//  Base1
//
//  Created by 079 on 14-10-10.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
class Base
{
public:
    virtual void fun()
    {
        cout<<"Base fun()"<<endl;
    }
    void run()
    {
        fun();
    }
};

class Derived : public Base
{
public:
    void fun()
    {
        cout<<"Derived fun()"<<endl;
    }
};

void foo(Base b)
{
    b.fun();
}

int main(int argc, const char * argv[])
{
    Base b;
    Derived d;
    Base *p = &d;
    Base &br = d;
    
    b = d;  // 用子类对象给
    b.fun( ); //父类
    d.fun( ); //子类
    p -> fun( );//子类
    foo(d); //子类
    foo(b); //父类
    br.fun( ); //子类
    
    Base& brr = b;
    brr.run();
    br.run();

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

