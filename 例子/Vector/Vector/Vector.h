//
//  Vector.h
//  Vector
//
//  Created by 079 on 14-9-28.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Vector__Vector__
#define __Vector__Vector__

#include <iostream>
using namespace std;
class Vector
{
public:
    Vector();
    int & operator[](int index);
    friend ostream& operator<<(ostream &out,const Vector &v);
private:
    int rep[100];
};

#endif /* defined(__Vector__Vector__) */
