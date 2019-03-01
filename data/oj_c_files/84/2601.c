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
	int i,n,a[n],x,y;
	int *p;
	scanf("%d",&n);
	for(p=a;p<n+a;p++)
		scanf("%d",&*p);
	p=a;
	x=a[0];
	for(i=0;i<n;i++)
		if(x<*(p+i))x=*(p+i);
	if(x==*a)
	{
		y=a[0]-1;
		for(i=0;i<n;i++)
			if(y<*p&&*p<a[0])y=*p++;
	}
	if(x!=a[0])
	{
		y=a[0];
		for(i=0;i<n;i++)
			if(y<a[i]&&a[i]<x)y=a[i];
	}	
	printf("%d\n%d\n",x,y);
	return 0;
}