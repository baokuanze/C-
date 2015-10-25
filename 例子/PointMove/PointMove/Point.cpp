//
//  Point.cpp
//  CircleAndPoint
//
//  Created by 079 on 14-9-22.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include "Point.h"

Point::Point()
{
    _centerX = 0;
    _centerY = 0;
}

Point::Point(float x,float y)
{
    _centerX = x;
    _centerY = y;
}

void Point::printPoint() const
{
    cout<<"x = "<<_centerX<<"\ny = "<<_centerY<<endl;
}

float Point::getX() const
{
    return _centerX;
}

float Point::getY() const
{
    return _centerY;
}


void Point::setPoint(float x, float y)
{
    _centerX = x;
    _centerY = y;
}

void Point::move(float x, float y)
{
    _centerX += x;
    _centerY += y;
}
