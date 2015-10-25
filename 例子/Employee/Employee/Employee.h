//
//  Employee.h
//  Employee
//
//  Created by 079 on 14-9-25.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Employee__Employee__
#define __Employee__Employee__

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    Employee(char name_str[]);
    
    static void totolPay(double p);
    
    void printEmploy();
    
    
private:
    char name[50];
    //string name;
    int _id;
    
    static int id_nexta;
    static int toto_paya;
};

#endif /* defined(__Employee__Employee__) */
