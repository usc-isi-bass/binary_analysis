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
	int f,i,num,sum=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%7==0)
		{
			f=0;
		}
		else if(i%10==7)
		{
			f=0;
		}
		else if(i/10==7)
		{
			f=0;
		}
		else
		{
			f=i;
		}
		sum+=f*f;
	}
	printf("%d\n",sum);
	return 0;
}