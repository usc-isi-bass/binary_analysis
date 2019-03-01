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
	int n,i,sum1=0,sum2=0,sum3;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum2=sum2+i*i;
	}
	for(i=1;i<=n;i++)
	{
		if(i%7==0||i%10==7||i/10==7)
		{
			sum1=sum1+i*i;
		}
	}

	sum3=sum2-sum1;
	printf("%d\n",sum3);
	return 0;
}
