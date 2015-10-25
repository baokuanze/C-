//
//  main.cpp
//  Employee
//
//  Created by 079 on 14-9-25.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Employee.h"

int main(int argc, const char * argv[])
{

    char n1[] = "abc";
    Employee e1(n1);
    Employee e2("bcd");
    Employee e3("cde");
    Employee e4("def");
    
    e1.printEmploy();
    e2.printEmploy();
    e3.printEmploy();
    e4.printEmploy();
    
    Employee::totolPay(1000);
    Employee::totolPay(2000);
    Employee::totolPay(3000);
    Employee::totolPay(4000);
   ////////////////////////////
    e1.totolPay(1000);
    e1.totolPay(2000);
    e1.totolPay(3000);
    e1.totolPay(4000);
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

