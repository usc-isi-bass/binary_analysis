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
	if(m<0||n<=0)
	{
		return 0;
	}
	if(m==1||n==1||m==0)
	{
		return 1;
	}
	if(m>1&&n>1)
	{
		return (f(m,n-1)+f(m-n,n));
	}
}
int main()
{
	int x,m,n,i,k;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d%d",&m,&n);
		k=f(m,n);
		printf("%d\n",k);
	}
}