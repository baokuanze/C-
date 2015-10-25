//
//  Stack.h
//  Stack
//
//  Created by 079 on 14-10-14.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#ifndef __Stack__Stack__
#define __Stack__Stack__

#include <iostream>
using namespace std;
template <typename T = char *,int max_size = 10>
class Stack
{
public:
    Stack()
    {
        size = (max_size>0 && max_size<1000 ? max_size : 10);
        top = -1;
        stackPtr = new T[size];
    }
    ~Stack() {delete [] stackPtr;}
    int push(const T & item)
    {
        if (!isFull())
        {
            stackPtr[++top] = item;
            return 1;
        }
        return 0;
    }
    int pop(T & item)
    {
        if (!isEmpty()) {
            item = stackPtr[top--];
            return 1;
        }
        return 0;
    }
    int isFull() const {return (top == size - 1);}
    int isEmpty() const {return (top == -1);}
    void printOn(ostream & outPut)
    {
        for (int i = 0; i < size; i++) {
            outPut<<stackPtr[i];
            if (i < size - 1) {
                outPut<<",";
            }
        }
        outPut<<endl;
    }
private:
    int size;
    int top;
    T * stackPtr;
};

#endif /* defined(__Stack__Stack__) */
