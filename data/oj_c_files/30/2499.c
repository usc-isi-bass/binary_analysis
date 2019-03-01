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
	int n,sum=0,i=1;
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%7==0)
		{
			i++;
			continue;
		}
		if(i/10==7)
		{
			i++;
			continue;
		}
		if(i%10==7)
		{
			i++;
			continue;
		}
	    sum+=i*i;
		i++;
	}
	printf("%d",sum);
}