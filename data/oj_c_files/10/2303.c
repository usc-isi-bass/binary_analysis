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
	int n,i;
	struct a{int x,y;}a[25];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i].x);
	}
	int max=0,j;
	for(j=0;j<n;j++)
	{
		int k=0;
		for(i=j+1;i<n;i++)
		{
			if(a[i].x<a[j].x)k++;
		}
		a[j].y=k;
	}
	int w;
	for(i=n-1;i>=1;i--)
	{
		if(a[i-1].y<a[i].y+1)
		{
			a[i-1].y=a[i].y;
			w++;
		}
	}
	printf("%d",n-w);
	return 0;
}