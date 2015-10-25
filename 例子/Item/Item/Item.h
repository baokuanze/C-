//
//  Item.h
//  Item
//
//  Created by 079 on 14-9-30.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Item__Item__
#define __Item__Item__

#include <iostream>
using namespace std;
class Item
{
public:
    /*Item():_id(0),_name(new char [1])
    {
        strcpy(_name, "");
    }*/
    Item(const char *str = "",int i = 0):_id(i),_name(new char [strlen(str)+1])
    {
        strcpy(_name,str);
    }
    void setItem(const char *str,int i)
    {
        if (_name) {
            delete [] _name;
        }
        _name = new char[strlen(str)];
        strcpy(_name, str);
        _id = i;
    }
    
    friend ostream & operator<<(ostream &out,const Item &i);
private:
    int _id;
    char *_name;
};

#endif /* defined(__Item__Item__) */
