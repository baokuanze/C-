//
//  Circle.cpp
//  CircleAndPoint
//
//  Created by 079 on 14-9-22.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include "Circle.h"

Circle::Circle()
{
    p.setPoint(100, 100);
    _radius = 100;
}

Circle::Circle(float r,Point point1):p(point1){
    _radius = r;
}

float Circle::getRadius()
{
    return _radius;
}

Point Circle::getPoint()
{
    return p;
}

void Circle::printCircle()
{
    cout<<"r = "<<_radius<<endl;
    p.printPoint();
}
