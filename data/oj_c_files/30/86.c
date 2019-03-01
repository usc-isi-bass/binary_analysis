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
	int n,i,sum=0,sum1=0,t;
	scanf("%d",&n);
	if(n<7)
	{
		for(i=1;i<=n;i++)
		{
			sum=sum+i*i;
		}
	}
	if(n>=7)
	{
		for(i=7;i<=n;i++)
		{
			sum=sum+i*i;
		}
		for(i=7;i<=n;i++)
		{
			t=i/10;
			if(i%10==7||i%7==0||t==7) sum1=sum1+i*i;
		}
		sum=sum-sum1+91;
	}
	printf("%d",sum);
}
