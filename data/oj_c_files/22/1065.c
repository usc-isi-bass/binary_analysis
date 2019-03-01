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
	int a,i=1,max,submax;
	char p;
	while(scanf("%d%c",&a,&p)&&p!='\n')
	{
		if(i==1)
		{
			max=a;
			submax=0;
		}
		else
		{
			if(a>max)
			{
				submax=max;
				max=a;
			}
			else
			{
				if(a>submax&&a!=max)
				{
					submax=a;
				}
			}
		}
		i++;
	}
	if(i==1)//?????
	{
		printf("No");
	}
	else
	{
		if(a>max)
		{
			submax=max;
			max=a;
		}
		else
		{
			if(a>submax&&a!=max)
			{
				submax=a;
			}
		}
		if(submax==0)
		{
			printf("No");
		}
		else
		{
			printf("%d",submax);
		}
	}
}