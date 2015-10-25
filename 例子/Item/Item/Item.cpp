//
//  Item.cpp
//  Item
//
//  Created by 079 on 14-9-30.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include "Item.h"
ostream & operator<<(ostream &out,const Item &i)
{
    out<<i._name<<" "<<i._id<<endl;
    return out;
}