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

struct ren
{
	int x;
	int y;
}a[1010];
int main()
{
    char c;
	int i=1,j,n,min=2000,max=0,t,d;
	do
	{
		scanf("%d%c",&a[i].x,&c);
		i++;
	}while(c==',');
	n=i-1;
	i=1;
	do
	{
		scanf("%d%c",&a[i].y,&c);
		i++;
	}while(c==',');
	printf("%d ",n);
	for(i=1;i<=n;i++)
	{
		if(a[i].x<min)
			min=a[i].x;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i].y>max)
			max=a[i].y;
	}
	for(i=min,t=0;i<=max-1;i++)
	{
        for(j=1,d=0;j<=n;j++)
		{
			if(a[j].x<=i&&a[j].y>=i+1)
				d++;
		}
        if(d>t)
			t=d;
	}
    printf("%d",t);
	return 0;
}