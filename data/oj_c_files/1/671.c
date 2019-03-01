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


// ????.cpp : ??????????????
//


int f(int x,int y)
{
	int i,a=1;
	if(x<y) return 0;
	if(x==y) return 1;
	if(x>y)
	{
		if(y==1)
		{
			for(i=y+1;i<=x;i++)
			{
				if(x%i==0) a=a+f(x/i,i);
			}
		}
		else
		{
			for(i=y;i<=x;i++)
			{
				if(x%i==0) a=a+f(x/i,i);
			}
		}
		return a;
	}
}

int main()
{
	int n,j,b=0,p,k;
	scanf("%d",&p);
	for(k=1;k<=p;++k)
	{
	scanf("%d",&n);
	b=f(n,1);
	printf("%d\n",b);
	}
	return 0;
}
