//
//  Account.h
//  Account
//
//  Created by 079 on 14-9-29.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Account__Account__
#define __Account__Account__

#include <iostream>
using namespace std;
class Account
{
public:
    Account(const char *name = "unknown",const char *mr = "Miss",float y = 0.0);
    ~Account(){delete [] title;}
    void changeName(const char *newName);
    void changeTitle(const char *newTitle);
    friend ostream & operator<<(ostream &out, const Account& a);
private:
    char *title;
    char owner[10];
    float balance;
};

#endif /* defined(__Account__Account__) */
