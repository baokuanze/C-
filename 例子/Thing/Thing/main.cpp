//
//  main.cpp
//  Thing
//
//  Created by 079 on 14-10-10.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
class Thing
{
public:
    virtual void what_am_i(){cout<<"thing"<<endl;}
    virtual ~Thing(){cout<<"thing destructor"<<endl;}
};
class Animal : public Thing
{
public:
    virtual void what_am_i(){cout<<"animal"<<endl;}
    virtual ~Animal(){cout<<"animal destructor"<<endl;}
};

int main(int argc, const char * argv[])
{
    Thing* t = new Thing();
    Animal*  x = new Animal();   // Thing* y = new Animal();  delete y;
    
    Thing* array[2];//父类指针数组
    
    array[0] = t;				// base pointer
    array[1] = x;
    //数组里存储的，是两个父类指针；
    //但是，array[0]指向父类对象；array[1]指向子类对象。
    
    for (int i=0; i<2; i++)  array[i]->what_am_i( ) ;
    
    delete array[0];
    delete array[1];
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

