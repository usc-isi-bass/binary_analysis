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
	int x,y;
	scanf("%d%d",&x,&y);
	int a[1000],b[1000];
	int i=1,j=1;
	a[1]=x;
	b[1]=y;
	if(x==y)
		printf("%d",x);
	else
	{
	while(a[i]!=1)
	{
		i++;
		if(x%2==0)
		{
			a[i]=x/2;
			x=x/2;
		}
		else
		{
			a[i]=(x-1)/2;
			x=(x-1)/2;
		}
	}
	while(b[j]!=1)
	{
		j++;
		if(y%2==0)
		{
			b[j]=y/2;
			y=y/2;
		}
		else
		{
			b[j]=(y-1)/2;
			y=(y-1)/2;
		}
	}
	while(a[i]==b[j])
	{
		i--;
		j--;
	}
	printf("%d",a[i+1]);
	}
}
