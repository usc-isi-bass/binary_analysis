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
//  123
//
//  Created by blues cookie on 12-11-12.
//  Copyright (c) 2012? blues cookie. All rights reserved.
//

int calc(int a,int b)
{
    if(a*a>b) return 1;
    if(b%a==0) return (calc(a,b/a)+calc(a+1,b));
    return calc(a+1,b);
}
int main(int argc, const char * argv[])
{
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cout<<calc(2,a)<<endl;
    }
    return 0;
}