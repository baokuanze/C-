//
//  main.cpp
//  Space
//
//  Created by 079 on 14-10-15.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
namespace my_namespace {
    int count;
    const int size = 10;
    const double pi = 3.14159;
    void print();
    namespace inner
    {
        int count;
    }
}

void my_namespace::print()
{
    cout<<"my_namespace"<<endl;
    cout<<"size = "<<size<<endl;
    cout<<"pi = "<<pi<<endl;
    cout<<"inner count = "<<inner::count<<endl;
}

int main(int argc, const char * argv[])
{
    const int size = 5;
    double table[my_namespace::size][size];
    for (my_namespace::count = 0; my_namespace::count < my_namespace::size; ++my_namespace::count) {
        for (my_namespace::inner::count = 0; my_namespace::inner::count < size; ++my_namespace::inner::count) {
            table[my_namespace::count][my_namespace::inner::count] = my_namespace::inner::count;
            cout<<table[my_namespace::count][my_namespace::inner::count]<<" ";
        }
        cout<<endl;
    }
    my_namespace::print();

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

