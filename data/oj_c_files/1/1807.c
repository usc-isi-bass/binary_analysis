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
//  ?????
//
//  Created by ???? on 13-11-22.
//  Copyright (c) 2013? ????. All rights reserved.
//

int f(int a,int s)//s for start
{
    if(a<=s) return 1;
	int b=sqrt((float)a),flag=0,sum=1;
	for(int i=s;i<=b;i++)
	{
		if(a%i==0)
		{
			flag++;
            
			sum=sum+f(a/i,i);
		}
	}
	if(flag==0) return 1;
	else return sum;
}



int main()
{
	int a,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cout<<f(a,2)<<endl;
	}
	
    return 0;
}
