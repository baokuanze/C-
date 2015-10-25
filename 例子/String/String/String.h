//
//  String.h
//  String
//
//  Created by 079 on 14-9-30.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __String__String__
#define __String__String__

#include <iostream>
#include <string>
using namespace std;
class String
{
public:
    String():len(0),rep(new char[1])
    {
        strcpy(rep, "");
    }
    String(const char *T):len((int)strlen(T)),rep(new char[strlen(T)+1])
    {
        cout<<"String(const char *T)"<<endl;
        strcpy(rep,T);
    }
    String(const String &s):len(s.len),rep(new char[s.len])
    {
        cout<<"拷贝构造函数"<<endl;
        strcpy(rep,s.rep);
    }
    ~String(){delete []rep;}
    
    friend void print(const String &s);
private:
    int len;
    char *rep;
};

#endif /* defined(__String__String__) */
