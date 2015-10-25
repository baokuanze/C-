//
//  main.cpp
//  Link
//
//  Created by 079 on 14-10-17.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
typedef struct Node
{
    char name[10];
    struct Node *link;
}stu;

stu* create(int n)
{
    stu *p,*h,*s;
    
    if((h = (stu*)malloc(sizeof(struct Node))) == NULL)
    {
        cout<<"h memory allocation error"<<endl;
        exit(0);
    }
    
    h->link = NULL;
    strcpy(h->name, "head");
    
    p = h;
    
    for (int i = 0; i < n-1; i++) {
        if ((s = (stu*)malloc(sizeof(struct Node))) == NULL) {
            cout<<"s memory allocation error"<<endl;
            exit(0);
        }
        
        cout<<"input name"<<endl;
        cin>>s->name;
        s->link = NULL;
        p->link = s;
        
        p = s;
    }
    return h;
}

stu *search(stu * h,char * x)
{
    stu *p = h;
    while (p != NULL) {
        if (strcmp(p->name, x) == 0) {
            return p;
        }
        p = p->link;
    }
    if (p == NULL) {
        cout<<"not found"<<endl;
    }
    return p;
}

stu* deleteNode(stu *h,char *x)
{
    if (h == NULL) {
        return h;
    }
    
    stu *p1 = h;
    stu *p2 = h->link;
    
    if (strcmp(p1->name, x) == 0) {
        h = h->link;
        free(p1);
        return h;
    }
    
    while (p2) {
        if (strcmp(p2->name, x) == 0) {
            p1->link = p2->link;
            free(p2);
            return h;
        }
        p1 = p2;
        p2 = p2->link;
    }
    return h;
}

void insertNode(stu *p)
{
    char namestr[10];
    stu *s;
    if ((s = (stu *)malloc(sizeof(struct Node))) == NULL) {
        cout<<"s memory allocation error"<<endl;
        exit(0);
    }
    
    cout<<"input name"<<endl;
    cin>>namestr;
    strcpy(s->name, namestr);
    
    s->link = p->link;
    p->link = s;
}

void print(stu *h)
{
    stu *p = h;
    while (p) {
        cout<<p->name<<" ";
        p = p->link;
    }
    cout<<endl;
}

void freeList(stu * &h)
{
    stu *p = h;
    while (h) {
        p = h;
        h = h->link;
        free(p);
        p = NULL;
    }
}

stu *reverse(stu *h)
{
    stu *p,*q,*r;
    p = h;
    q = p->link;
    
    while (q) {
        r = q->link;
        q->link = p;
        
        p = q;
        q = r;
    }
    h->link = NULL;
    h = p;
    return h;
}

int main(int argc, const char * argv[])
{

    stu *p,*p2,*p3,*p4,*p5;
    p = create(6);
//    p2 = create(6);
//    p3 = create(6);
//    p4 = create(6);
//    p5 = create(6);
    
    stu *s;
    s = search(p,(char*)"ee");
    if (s) {
        cout<<s->name<<endl;
    }
    
    
    p = deleteNode(p, (char *)"cc");
    
    print(p);
    
    insertNode(s);
    
    print(p);
    
    p = reverse(p);
    print(p);
    cout<<"....."<<endl;
    
    freeList(p);
    cout<<"....."<<endl;
    print(p);
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

