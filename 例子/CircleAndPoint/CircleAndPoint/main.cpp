//
//  main.cpp
//  CircleAndPoint
//
//  Created by 079 on 14-9-22.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Circle.h"
#include "Point.h"
int main(int argc, const char * argv[])
{
    Point point1;
    
    point1.setPoint(100, 200);
    
    Circle circle1(3,point1);
    
    circle1.printCircle();
    
    

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

