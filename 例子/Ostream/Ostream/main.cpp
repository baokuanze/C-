//
//  main.cpp
//  Ostream
//
//  Created by 079 on 14-10-16.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[])
{
    
    /*ofstream file;
    file.open("/Users/apple/Desktop/A.txt");
    
    file<<"helloword\n"<<75;
    
    file.put('a');
    
    file.close();*/
    
    char outPut[100];
    int x;
    
    fstream file;
    file.open("file.txt",ios::out);
    
    file>>outPut;
    
    file.close();

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

