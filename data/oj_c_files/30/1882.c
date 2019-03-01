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
	int i,n;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;)
	{
		if(i%7==0||(i-7)%10==0)
		{
			i++;
			continue;
		}
		else if(i>70&&i<80)
		{
			i++;
			continue;
		}
		else
		{
		sum+=pow(i,2);
		i++;
		}
	}
	printf("%d\n",sum);
	return 0;
}