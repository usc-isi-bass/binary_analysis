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

//============================================================================
// Name        : 9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int sum=0;//????sum

void devide(int a,int b)//??
{
	if(a==1)
		sum++;
	else
	{
	    if(a>=b)
		    devide(a,b+1);
	    if(a%b==0)
		    devide(a/b,b);
	}
}

int main()//???
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		sum=0;
		devide(a,2);
		cout<<sum<<endl;
	}
	return 0;
}
