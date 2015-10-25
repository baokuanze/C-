//
//  main.cpp
//  Demo
//
//  Created by 079 on 14-9-30.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
class Demo
{
public:
    Demo(int a = 0):i(a){cout<<"普通构造函数"<<endl;}
    Demo(const Demo &a)
    {
        cout<<"拷贝构造函数"<<endl;
        (*this).i = a.i;
    }
    ~Demo(){cout<<"析构函数"<<endl;}
    const Demo &operator=(const Demo &d)
    {
        cout<<"赋值运算符"<<endl;
        (*this).i = d.i;
        return *this;
    }
private:
    int i;
};

Demo foo(Demo x)
{
    cout<<"---Demo d;"<<endl;
    Demo d;
    cout<<"---return d;"<<endl;
    return d;
}

int main(int argc, const char * argv[])
{
    cout<<"---Demo a(2);"<<endl;
    Demo a(2);
    
    cout<<"---{"<<endl;
    {
        cout<<"---Demo b;"<<endl;
        Demo b;
        cout<<"---b = foo(a);"<<endl;
        b = foo(a);
        cout<<"---}"<<endl;
    }
    cout<<"---Demo c = a;"<<endl;
    Demo c = a;

    // insert code here...
    std::cout << "Hello, World!\n";
    cout<<"---return 0;"<<endl;
    return 0;
}

