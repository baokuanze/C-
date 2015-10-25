//
//  Point.h
//  CircleAndPoint
//
//  Created by 079 on 14-9-22.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __CircleAndPoint__Point__
#define __CircleAndPoint__Point__

#include <iostream>

using namespace std;

class Point
{
public:
    Point();
    Point(float x,float y);
    ~Point(){cout<<"析构函数"<<endl;};
    
    float getX() const;
    float getY() const;
    
    void move(float x,float y);
    
    void printPoint() const;
    void setPoint(float x,float y);
    
private:
    float _centerX;
    float _centerY;
};

#endif /* defined(__CircleAndPoint__Point__) */
