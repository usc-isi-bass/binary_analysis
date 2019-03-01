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
	int n,i,a,sum;
	sum=0;
	a=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a=i%10;
		if(i%7==0)
		{
			continue;
		}
		else if(a==7)
		{
			continue;
		}
		else if(i==70+a)
		{
			continue;
		}
		sum=sum+i*i;
	}
	printf("%d",sum);
	return 0;
}
		