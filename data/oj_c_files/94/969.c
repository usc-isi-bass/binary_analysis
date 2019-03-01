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

int main()
{
	int N;
	cin>>N;
	int a[500],i;
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	int d,p=0;//d???
	int b[500];//??????
	for(i=0;i<N;i++)
	{
		d=a[i]%2;
		if(d==1)b[p++]=a[i];//??????
	}
	int m,n,x;
	for(m=0;m<p-1;m++)//????
	{
		for(n=0;n<p-1-m;n++)
		{
			if(b[n]>b[n+1])
			{x=b[n];
			 b[n]=b[n+1];
			 b[n+1]=x;
			}
		}
	}
	for(n=0;n<p-1;n++)
	{
		cout<<b[n]<<",";//??
	}cout<<b[p-1];
	getchar();
	getchar();
	return 0;
}