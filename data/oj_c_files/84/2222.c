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
	int i=0;
	int a;
	int b;
	int max=0;
	int smax=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b);
		if(b>max)
		{
			smax=max;
			max=b;
		}
		else if(b>smax)
		{
			smax=b;
		}
		else
		{
			;
		}
	}
	printf("%d\n",max);
	printf("%d",smax);
	return 0;
}
