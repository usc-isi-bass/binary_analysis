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

int fang(int m,int n)
{
	int c;
	if(n==1)
		c=1;
	else if(m==1)
		c=1;
	else if(m==0)
		c=1;

	else if(m>=n)
	{
		c=fang(m,n-1)+fang(m-n,n);
	}
	else if(m<n)
	{
		c=fang(m,m);
	}
	return(c);
}
int main()
{
	int t,m,n,i,c;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&n);
		c=fang(m,n);
		printf("%d\n",c);
	}
}