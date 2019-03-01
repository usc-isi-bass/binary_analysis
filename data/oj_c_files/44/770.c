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

int f(int a);
int main()
{
	int i,m;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&m);
		printf("%d\n",f(m));
	}
	return 0;
}
int f(int a)
{
	int b,c=0,j=0,k,d=0;
	int i;
	b=a;
	while(b!=0)
	{
		b=b/10;
		j++;}
	for(i=1;i<=j;i++)
	{
		c=a%10;
		for(k=i;k<j;k++)
		{
			c=c*10;
		}
		d=d+c;
		a=a/10;
	}
	return d;
}
