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

int f(int m,int n)
{
	int c;
	if(m>=n)
	{
		if(n==1||m==1)
		c = 1;
		else if(m==2&&n!=1)
		{
			c = 2;
		}
		else if(m==0)
		c = 1;
		else
		c = f(m-n,n)+f(m,n-1);
		return c;
	}
	else
	{
		c = f(m,m);
		return c;
	}
} 
int main()
{
	int f(int,int);
	int x,y,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&x,&y);
		printf("%d\n",f(x,y));
	}
	return 0;
}