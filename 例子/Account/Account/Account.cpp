//
//  Account.cpp
//  Account
//
//  Created by 079 on 14-9-29.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include "Account.h"
Account::Account(const char *name,const char *mr,float y)
{
    title = new char[strlen(mr)+1];
    strcpy(title,mr);
    strcpy(owner,name);
    balance = y;
}

void Account::changeName(const char *newName)
{
    strcpy(owner,newName);
}

void Account::changeTitle(const char *newTitle)
{
    if (strlen(newTitle) > strlen(title)) {
        char *tmp = title;
        title = new char[strlen(newTitle)+1];
        strcpy(title,newTitle);
        delete [] tmp;
    }else{
        strcpy(title,newTitle);
    }
}

ostream & operator<<(ostream &out,const Account &a)
{
    out<<a.owner<<" "<<a.title<<" "<<a.balance<<endl;
    return out;
}