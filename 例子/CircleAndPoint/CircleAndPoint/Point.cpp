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

void Point::printPoint()
{
    cout<<"x = "<<_centerX<<"\ny = "<<_centerY<<endl;
}

void Point::setPoint(float x, float y)
{
    _centerX = x;
    _centerY = y;
}
