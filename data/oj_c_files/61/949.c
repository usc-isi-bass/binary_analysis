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

/*
 * Fib.cpp
 *
 *  Created on: 2013-10-1
 *      Author: KEVIN
 */


int fibs[19];//????????????????????
int Fib(int i)
{
	if(fibs[i-1]!=0)return fibs[i-1];//????????????
	else
	{
                //?????????????
		if(i==1||i==2)
		{
			fibs[i-1]=1;
			return 1;
		}
		else 
		{
			fibs[i-1]=Fib(i-1)+Fib(i-2);
			return fibs[i-1];
		}
	}
}
int main()
{
	for(int i=0;i<=19;i++)fibs[i]=0;//???0
	int n;
	cin>>n;
	while(n)
	{
		int a;
		cin>>a;
		cout<<Fib(a)<<endl;
		n--;
	}
	return 0;
}