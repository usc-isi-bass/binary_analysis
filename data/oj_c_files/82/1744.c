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
	int n,i,time,max;
	time=0;
	max=0;
	scanf("%d",&n);
	int a,b;
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{
		time++;
			if(time>max)
			{
		    max=time;
			}
			else
			{
			max=max;
			}
						
		}
		else
		{
			if(time>max)
			{
		    max=time;
			}
			else
			{
			max=max;
			time=0;
			}
		}
	}
	printf("%d",max);
	return 0;
}