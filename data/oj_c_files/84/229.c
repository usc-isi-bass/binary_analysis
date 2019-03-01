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
	int max,min,n,x,y;
	min=100;max=1;
	scanf("%d",&n);
	if(n==n)
	{
		scanf("%d",&x);
		max=min=x;
	}
	n=n-1;
	if(n==n)
	{
		scanf("%d",&x);
		max=max>x?max:x;
		min=min<x?min:x;
	}
	n=n-1;
	for(n=n;n>0;n--)
	{
		scanf("%d",&x);
		if(max==x)
			max=x;min=min;
		if(max!=x)
		{
			y=max<x?max:x;
			max=max>x?max:x;
			min=min>y?min:y;
		}
	}
	printf("%d\n%d",max,min);
}