//
//  main.cpp
//  Cast
//
//  Created by 079 on 14-10-15.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
class Base
{
public:
    virtual void print() const
    {
        cout<<"Base"<<endl;
    }
    void outB() const
    {
        cout<<"out B"<<endl;
    }
};

class D1 : public Base
{
public:
    void print() const
    {
        cout<<"D1"<<endl;
    }
    void outD1() const
    {
        cout<<"D1 out"<<endl;
    }
};

class D2 : public Base
{
public:
    void print() const
    {
        cout<<"D2"<<endl;
    }
    void outD2() const
    {
        cout<<"D2 out"<<endl;
    }
};

class D3
{
public:
    void print() const
    {
        cout<<"D2"<<endl;
    }
    void outD3() const
    {
        cout<<"D2 out"<<endl;
    }
};

int main(int argc, const char * argv[])
{
    D1 d1;
    D2 d2;
    
    const D1 *p1;
    const D2 *p2;
    const D3 *p3;
    
    Base *p[2] = {&d1,&d2};
    
    for (int i = 0; i < 2; i++) {
        if ((p1 = dynamic_cast<D1 *>(p[i]))) {
            p1->print();
            p1->outD1();
        }else if ((p2 = static_cast<D2 *>(p[i]))) {
            p2->print();
            p2->outD2();
        }
    }
    
    vector<int> v(10);
    
    for (int i = 0; i < 10; i++) {
        v[i] = i;
    }
    
    vector<int>::iterator itor = v.begin();
    while (itor != v.end()) {
        cout<<*(itor++)<<" ";
    }
    cout<<endl;
    

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

