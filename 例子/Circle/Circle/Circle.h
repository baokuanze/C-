//
//  Circle.h
//  Circle
//
//  Created by 079 on 14-9-22.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Circle__Circle__
#define __Circle__Circle__

#include <iostream>
#include <math.h>

class Circle
{
public:
    Circle();
    //Circle(float r,float a,float b);
    Circle(float r = 10,float a = 20,float b = 30);
    //Circle(float r,float a);
    //Circle(double r);
    //Circle(int r);
public:
    float getRadius();
    float getCenterX();
    float getCenterY();
    
    void setCircle(float radius,float x,float y);
    Circle & setRadius(float r);
    Circle & setX(float x);
    Circle & setY(float y);
    
    float distance(Circle c1);
    
private:
    float _radius;
    float _centerX;
    float _centerY;
};

#endif /* defined(__Circle__Circle__) */
