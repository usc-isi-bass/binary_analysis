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

//  ????????
//  main.cpp
//  Homework
//
//  Created by ??? on 13-10-18.
//  Copyright (c) 2013? ???. All rights reserved.
//


int sushu(int n)//???? ???1 ???0
{
	for(int i=2;i*i<=n;i++)
    {
    	if(n%i==0)
    	{
    		return 0;
    		break;
    	}
    }
    return 1;
}

int main()
{
    int m,a;
    cin>>m;
    for(a=3;a<=m/2;a=a+2)
        {
            if(sushu(a)&&sushu(m-a))//?????m ?????
                cout<<a<<" "<<m-a<<endl;
        }
    return 0;
}
