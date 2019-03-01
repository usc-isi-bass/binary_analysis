#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//
//  main.cpp
//  Homework
//
//  Created by ??? on 13-12-4.
//  Copyright (c) 2013? ???. All rights reserved.
//


int main()
{
    char a[31];
    cin.getline(a,31);
    char *p=a;
    for(int i=0;i<31;i++)
    {
        if(*(p+i)>='0'&&*(p+i)<='9')
            cout<<*(p+i);
        else
            if(*(p+i+1)>='0'&&*(p+i+1)<='9')
               cout<<endl;
    }
    return 0;
}