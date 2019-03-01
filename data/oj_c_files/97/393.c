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
	int n,a,b,c;
	scanf("%d",&n);
	a=n/100;
	b=n/10-n/100*10;
	c=n-n/100*100-(n/10-n/100*10)*10;
	
	if (a!=0)
	{
		printf("%d\n",a);
	}
	else
		{
		printf("0\n");
	}

	if (b>=5)
	{
		printf("%d\n",b/5);
		b=b-5;
	}
	else 
	{
		printf("0\n");
	}
	if (b>=2 && b<5)
	{
		printf("%d\n",b/2);
		b=b-2;
	}
	else 
	{
		printf("0\n");
	}
	if (b==1)
	{
		printf("%d\n",b);
	}
	else 
	{
		printf("0\n");
	}
	if (c>=5)
	{
		printf("%d\n",c/5);
		c=c-5;
	}
	else 
	{
		printf("0\n");
	}
	if (c>=1 && c<5)
	{
		printf("%d\n",c);
	}
	else 
	{
		printf("0\n");
	}

	return 0;
}

