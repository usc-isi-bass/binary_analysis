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

int D(int*h,int i,int n)
{
	int j,z=1,x;
	if(i<n)
	{
		for(j=i+1;j<n+1;j++)
		{
			if(h[j-1]<=h[i-1])
			{
				x=D(h,j,n)+1;
				if(z<x)z=x;
			}
		}
	}
	return z;
}
int main()
{
	int i,n,z=1,h[25],x;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",h+i);
	for(i=0;i<n;i++)
	{
		x=D(h,i+1,n);
		if(z<x)z=x;
	}
	printf("%d",z);
	return 0;
}