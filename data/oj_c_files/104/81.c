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

void main()
{
	int i,j,x,y,t,m,n,p;
	int a[10000],b[10000];
	scanf("%d %d",&a[0],&b[0]);
	for(i=0;i<10000;i++)
	{
		if(a[i]==1) 
		{
			x=i+2;
			break;
		}
		else a[i+1]=a[i]/2;
	}
	for(i=0;i<10000;i++)
	{
		if(b[i]==1) 
		{
			y=i+2;
			break;
		}
		else b[i+1]=b[i]/2;
	}
	m=x/2;
	for(i=0;i<m;i++)
	{
		t=a[i];
		a[i]=a[x-i-1];
		a[x-i-1]=t;
	}
	n=y/2;
	for(i=0;i<n;i++)
	{
		t=b[i];
		b[i]=b[y-i-1];
		b[y-i-1]=t;
	}
	for(i=0;i<x;i++)
	{
		if(a[i]==b[i]) p=a[i];
	}
	printf("%d",p);
}