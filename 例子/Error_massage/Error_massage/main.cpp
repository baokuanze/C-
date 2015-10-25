//
//  main.cpp
//  Error_massage
//
//  Created by 079 on 14-10-13.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
class Error_massage
{
public:
    char *_error;
    int *p;
    Error_massage(const char *e,int *ptr):_error((char*)e),p(ptr) {}
};

void f()
{
    int *a = new int[10];
    int b = 0;
    if (b == 0) {
        throw Error_massage("error b == 0",a);
    }
    delete []a;
}

void g()
{
    try {
        f();
    } catch (Error_massage &e) {
        delete []e.p;
        cout<<e._error<<endl;
    }
}

void asdsdf()
{
    cout<<".................."<<endl;
}

void a()
{
    throw "ad";
}

int main(int argc, const char * argv[])
{
    //g();

    set_terminate(asdsdf);
    a();
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

