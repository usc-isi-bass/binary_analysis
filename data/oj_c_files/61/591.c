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

int F(int x)
{
	int k,t,a[25];
	a[1]=1;
	a[2]=1;
	if(x<3)
	
	{
		t=a[x];	
		return t;
	}
	else
	{
		for(k=3;k<21;k++)
		{
			a[k]=a[k-1]+a[k-2];	
		}
		t=a[x];	
		return t;	
	}
}
int main()
{
	int n,a,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		printf("%d\n",F(a));	
	}


	return 0;
}