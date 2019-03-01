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
 * delete1.cpp
 *
 *  Created on: 2011-10-21
 *      Author: Administrator
 */


int main()//???
{
	int n,i,q,s;//??????
	cin>>n;
	int a[100001];//????
	for(i=0;i<n;i++)
	{
		cin>>a[i];//????
	}
	int k,j;
	cin>>k;
	for(q=0;q<n;q++)//????
	{
		if(a[q]!=k){s=q;}
	}
	for(j=0;j<=s-1;j++)
	{
		if(a[j]!=k)//????
		{
			cout<<a[j]<<" ";

		}
	}
	cout<<a[s];//??
	return 0;
}
