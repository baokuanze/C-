//
//  main.cpp
//  showEverage
//
//  Created by 079 on 14-9-25.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;

static int a;
void showEverage(double x);

void showa();
void showb();

int main(int argc, const char * argv[])
{
    /*double entry = 0;

    for (; ; ) {
        cout<<"输入一个数"<<endl;
        cin>>entry;
        if (entry < 0) {
            break;
        }
        showEverage(entry);
    }*/
    
    showa();
    showb();
    cout<<a<<endl;
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

void showEverage(double x)
{
    static double num;
    static double sum;
    
    num++;
    sum+=x;
    cout<<"num :"<<num<<"\tsum :"<<sum<<"\teverage :"<<sum/num<<endl;
}

void showa()
{
    a++;
}

void showb()
{
    a++;
}

