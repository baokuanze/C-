//
//  Stack.cpp
//  Stack
//
//  Created by 079 on 14-10-14.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include "Stack.h"

/*template <typename T>
Stack<T>::Stack(int s)
{
    size = (s>0 && s<1000 ? s : 10);
    top = -1;
    stackPtr = new T[size];
}*/

/*template <typename T>
int Stack<T>::push(const T & item)
{
    if (!isFull()) {
        stackPtr[++top] = item;
        return 1;
    }
    return 0;
}*/

/*template <typename T>
int Stack<T>::pop(T &item)
{
    if (!isEmpty()) {
        item = stackPtr[top--];
        return 1;
    }
    return 0;
}*/

/*template <typename T>
void Stack<T>::printOn(ostream &outPut)
{
    for (int i = 0; i < size; i++) {
        outPut<<stackPtr[i];
        if (i < size - 1) {
            outPut<<",";
        }
    }
    outPut<<endl;
}*/