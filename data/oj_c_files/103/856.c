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
 * 222.cpp
 *
 *  Created on: 2012-12-24
 *      Author: stream
 */
int main()
{
	int num=1,i,l;
	char a[1001];
	cin >>a;
	l=strlen(a); 
	if(l==1)
	{
		if(a[l-1]>=97)
			a[l-1]=a[l-1]-32;
		cout <<"("<<a[l-1]<<","<<num<<")";
		
	}
	else
	{
	for(i=1;i<l;i++)
	{
		if((a[i]==a[i-1])||(a[i]==a[i-1]+32)||(a[i]==a[i-1]-32))
		{
			num++;
		}
		else
		{
			if(a[i-1]>=97)
				a[i-1]=a[i-1]-32;
			cout <<"("<<a[i-1]<<","<<num<<")";
			num=1;
		}
		if(i==l-1)
		{
			if(a[l-1]>=97)
       			a[l-1]=a[l-1]-32;
			cout <<"("<<a[l-1]<<","<<num<<")";
		}
	}
	}
	return 0;
}
