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
	int n,a,b,i;
	int count=0,t=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		if (a>=90 && a<=140 && b>=60 && b<=90)
			count++;
		else
			if (count>t)
			{
				t=count;
				count=0;
			}
			else
				count=0;
	}
	if (count>t)
	{
		printf("%d\n",count);
	}
	else
	{
		printf("%d\n",t);
	}
	return 0;
}