//
//  main.cpp
//  Figure
//
//  Created by 079 on 14-10-11.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
class Point
{
private:
    int _centerX;
    int _centerY;
public:
    Point(int x = 0,int y =0):_centerX(x),_centerY(y){}
    void print()
    {
        cout<<"x = "<<_centerX<<" y = "<<_centerY<<" ";
    }
};

class Figure
{
private:
    Point center;
public:
    Figure(int x,int y):center(x,y){}
    Point& location() {return center;}
    virtual void draw() = 0;
};

class Circle : public Figure
{
private:
    double radius;
public:
    Circle(int x,int y,int r):Figure(x,y),radius(r){}
    void draw()
    {
        cout<<"center : ";
        location().print();
        cout<<"radius : "<<radius<<endl;
    }
};

class Square : public Figure
{
private:
    int side;
    double angle;
public:
    Square(int x,int y, int s,int a):Figure(x,y),side(s),angle(a){}
    void draw()
    {
        cout<<"center : ";
        location().print();
        cout<<"side : "<<side<<" angle : "<<angle<<endl;
    }
};

int main(int argc, const char * argv[])
{
    
    Circle c(1,2,3);
    Square s(4,5,6,7);
    c.draw();
    s.draw();
    
    Figure *f = &c;
    Figure &ff = s;
    
    f->draw();
    ff.draw();
    
    //Figure aFigure(10,10);
    //f = new Figure(10,10);

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

