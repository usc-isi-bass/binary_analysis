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
//  main.c
//  ???
//
//  Created by ?  on 12-12-1.
//  Copyright (c) 2012? ? . All rights reserved.
//

int f(int a,int b);
int f1(int a,int b)
{
    if(a==2) return(1);
    else return(f(a-1,b));
}
int f2(int a,int b)
{
    if(a==b) return(1);
    else return (f(a,b-a));
}
int f(int a,int b)
{
    if(a==1) return (1);
    else
    {
        if(a>b) return (f1(a,b));
        else return (f1(a,b)+f2(a,b));
    }
}
int main()
{
    int t,m,n,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",f(n,m));
    }
    return 0;
}