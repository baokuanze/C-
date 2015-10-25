//
//  Employee.cpp
//  Employee
//
//  Created by 079 on 14-9-25.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include "Employee.h"

int Employee::id_nexta = 0;
int Employee::toto_paya = 0;

Employee::Employee(char name_str[])//:_id(id_next++)
{
    id_nexta++;
    _id = id_nexta;
    strcpy(name, name_str);
    //name = name_str;
}

void Employee::totolPay(double p)
{
    toto_paya+=p;
    cout<<"totalpay = "<<toto_paya<<endl;
    //cout<<_id<<endl;
}

void Employee::printEmploy()
{
    cout<<name<<" id :"<<_id<<endl;
    //cout<<toto_paya<<endl;
}
