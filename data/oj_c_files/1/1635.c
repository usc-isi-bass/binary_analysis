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

int digui(int x,int min);
int main()
{
	int n,i,m,y;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&m);
		y=digui(m,2);
		printf("%d\n",y);
	}
	return 0;
}
int digui(int x,int min)
{
	int i,result;
	result=1;
	if(x<min)
	{
		return 0;
	}
	for(i=min;i<=x-1;i++)
	{
		if(x%i==0)
		{
			result=result+digui(x/i,i);
		}
	}
	return result;
}

