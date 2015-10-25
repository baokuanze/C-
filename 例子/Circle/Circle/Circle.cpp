//
//  Circle.cpp
//  Circle
//
//  Created by 079 on 14-9-22.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include "Circle.h"

Circle::Circle(float r,float a,float b)
{
    _radius = r;
    _centerX = a;
    _centerY = b;
}

//Circle::Circle(float r,float a, float b):_radius(r),_centerX(a),_centerY(b){}

/*Circle::Circle(float r,float a)
{
    _radius = r;
    _centerX = a;
    _centerY = 100;
}

Circle::Circle(double r)
{
    _radius = r;
    _centerX = 200;
    _centerY = 300;
}

Circle::Circle(int r)
{
    _radius = r;
    _centerX = 400;
    _centerY = 500;
}*/

Circle::Circle()
{
    _radius = 0;
    _centerX = 0;
    _centerY = 0;
}

float Circle::getRadius()
{
    return _radius;
}

float Circle::getCenterX()
{
    return _centerX;
}

float Circle::getCenterY()
{
    return _centerY;
}

void Circle::setCircle(float r, float a, float b)
{
    _radius = r;
    _centerX = a;
    _centerY = b;
}

Circle & Circle::setRadius(float r)
{
    _radius = r;
    return *this;
}

Circle & Circle::setX(float x)
{
    _centerX = x;
    return *this;
}

Circle & Circle::setY(float y)
{
    _centerY = y;
    return *this;
}

float Circle::distance(Circle c1)
{
    return sqrt((_centerX - c1._centerX)*(_centerX - c1._centerX) + (_centerY - c1._centerY) * (_centerY - c1._centerY));
}






