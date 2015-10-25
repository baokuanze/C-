//
//  Circle.h
//  CircleAndPoint
//
//  Created by 079 on 14-9-22.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __CircleAndPoint__Circle__
#define __CircleAndPoint__Circle__

#include <iostream>
#include "Point.h"
using namespace std;

class Circle
{
public:
    Circle();
    Circle(float r,Point point1);
    
    float getRadius();
    Point getPoint();
    
    void printCircle();
    
private:
    Point p;
    float _radius;
};

#endif /* defined(__CircleAndPoint__Circle__) */
