//
//  main.cpp
//  Exception
//
//  Created by 079 on 14-10-13.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
/*bool func(int a,int b,int &c)
{
    if (b == 0) {
        cout<<"b == 0"<<endl;
        return false;
    }
    c = a/b;
    return true;
}
void func1() {}
void func2() {}*/
class Base
{
    
};
class Derived :public Base
{
    
};
void func(int a,int b,int &c)
{
    Base bb;
    if (b == 0 || b == 10) {
        throw bb;
    }
    c = a/b;
}
void func1() {}
void func2() {}

void test(int a, int b, int &c)
{
    try {
        func(a, b, c);
        func1();
        func2();
        //int bb = 0;
    }
    catch (Derived d)
    {
        cout<<"Derived==========="<<endl;
    }
    catch (Base b) {
        cout<<"base==========="<<endl;
        //cout<<bb<<endl;
    }
}
int main(int argc, const char * argv[])
{

    /*int a = 10;
    int b = 0;
    int c = 0;
    
    bool result = func(a, b, c);
    
    if (!result) {
        cout<<"func fails"<<endl;
        return 0;
    }else {
        cout<<"func success"<<endl;
        func1();
        func2();
    }*/
    int a = 10;
    int b = 10;
    int c = 0;
    
    try {
        test(a, b, c);
    }
    catch (int a)
    {
        cout<<"test catch int "<<endl;
    }
    catch (double a)
    {
        cout<<"test catch double "<<endl;
    }
    catch (const char *str) {
        cout<<str<<endl;
    }
    catch (...)
    {
        cout<<"..."<<endl;
    }
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


