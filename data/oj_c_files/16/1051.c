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
	int n,b,c,d,i,t,j;
	c=0;
	scanf("%d",&n);
	if(n>0&&n<10000)
	{
		for(i=4;i>=1;i--)
	{
		b=n%(int)pow(10.0,(double)i)/(int)pow(10.0,(double)(t=i-1));
		if(b!=0)
		{
			j=i;
			break;
		}
	}
	for(i=1;i<=j;i++)
	{
		d=n%(int)pow(10.0,(double)i)/(int)pow(10.0,(double)(t=i-1));
		printf("%d",d);
	}
	}
	else if(n==0)
		printf("0");
		else if(n==10000)
			printf("00001");
}
