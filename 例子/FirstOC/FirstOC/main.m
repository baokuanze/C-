//
//  main.m
//  FirstOC
//
//  Created by 079 on 14-10-20.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

void testNSLog()
{
    NSString *str = @"Hello world";
    NSLog(@"NSString %@",str);
    NSNumber *num = [NSNumber numberWithInt:100];
    NSLog(@"NSNumber %@",num);
    
    int intv = -100;
    NSInteger intv2 = -999;
    NSLog(@"int %d NSInteger %ld",intv,intv2);
    
    unsigned int uintvalue = 100;
    unsigned int uintvalue2 = -100;
    NSLog(@"unsigned int %u,%u",uintvalue,uintvalue2);
    
    float floatvalue = 20.20;
    double doublevalue = 50.50;
    NSLog(@"float %f,double %f",floatvalue,doublevalue);
    char* p = "test pointer";
	NSLog(@"pointer : %p", p);//打印指针地址
    NSLog(@"char * p : %s", p);//打印字符串内容
	
	// %c : char; %C : unichar
	char aChar = 'G'; //char型,1个字节
    //char bChar = 0x61;// char型'a'
	unichar aUnichar = 0x4f60; // L'你'  //unichar,两个字节
	NSLog(@"char: %c", aChar);
	NSLog(@"unichar: %C", aUnichar);
	
	// %s : C string(bytes); %S : C String(unichar)
	NSLog(@"C string(bytes) : %s", p);
	unichar pUnichar[] = {L'你',L'好', 0x0000};//相当于’\0’
	NSLog(@"C string(unichar) : %S", (const unichar*)pUnichar);
    long int longint1 = 1213232490;
	NSLog(@"%ld = ",longint1);
	long long verylong = -1234567890123456789;
	NSLog(@"long long : %lld", verylong);
	unsigned long long uVeryLong = 123456789012345564;
	NSLog(@"unsigned long long : %llu", uVeryLong);
	long double aLongDouble = 123456789.12345;
	NSLog(@"long double : %Lf", aLongDouble);
    NSLog(@"");

}

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        testNSLog();
        // insert code here...
        //NSLog(@"Hello, World!");
        
    }
    return 0;
}

