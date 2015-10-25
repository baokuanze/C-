//
//  main.cpp
//  Circle
//
//  Created by 079 on 14-9-22.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Circle.h"
using namespace std;

int main(int argc, const char * argv[])
{

    Circle c1(0.1);
    //int a = 0;
    cout<<c1.getRadius()<<endl<<c1.getCenterX()<<endl<<c1.getCenterY()<<endl;
    c1.setCircle(1, 2, 3);
    Circle c2(1);
    /*
    Circle c[3];
    
    c[0].setCircle(2, 3, 4);
    c[1].setCircle(3, 4, 5);
    c[2].setCircle(4, 5, 6);
    
    cout<<"x ="<<c1.getCenterX()<<endl;
    cout<<"y = "<<c1.getCenterY()<<endl;
    
    cout<<"c[0] c[1] 圆心距"<<c[0].distance(c[1])<<endl;
    
    cout<<"///////////////////"<<endl;
    
    Circle cc(1,1,1);
    cout<<cc.getRadius()<<endl<<cc.getCenterX()<<endl<<cc.getCenterY()<<endl;
    cc.setRadius(2).setX(2).setY(2);
    cout<<endl<<cc.getRadius()<<endl<<cc.getCenterX()<<endl<<cc.getCenterY()<<endl;*/
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

