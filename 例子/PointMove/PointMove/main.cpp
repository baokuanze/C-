//
//  main.cpp
//  PointMove
//
//  Created by 079 on 14-9-23.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Point.h"
#include <math.h>

int main(int argc, const char * argv[])
{
    float distance(const Point & p1,const Point & p2);
    
    const Point middle(const Point &p1,const Point &p2);

    Point p1;//0,0
    Point p2(2,3);
    
    p1.printPoint();
    p2.printPoint();
    
    p1 = p2;
    
    cout<<"p1 now"<<endl;
    p1.printPoint();
    
    float dx,dy;
    
    cin>>dx>>dy;
    
    p1.move(dx, dy);
    
    cout<<"p1 move"<<endl;
    p1.printPoint();
    
    cout<<"p1 p1 中点";
    middle(p1, p2).printPoint();
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

float distance(const Point &p1,const Point &p2)
{
    return sqrt((p1.getX() - p2.getX()) * (p1.getX() - p2.getX()) + (p1.getY() - p2.getY())*(p1.getY() - p2.getY()));
}

const Point middle(const Point &p1,const Point &p2)
{
    float mx = (p1.getX() + p2.getX())/2;
    float my = (p1.getY() + p2.getY())/2;
    return Point(mx,my);
}

