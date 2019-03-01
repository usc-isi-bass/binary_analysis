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
	int a[305],i=1,max,submax,j;
	char p;
	while(scanf("%d%c",&a[i],&p)&&p!='\n')
	{
		i++;
	}
	if(i==1)//?????
	{
		printf("No");
	}
	else
	{
		max=a[1];
		submax=0;
		for(j=2;j<=i;j++)
		{
			if(a[j]>max)
			{
				submax=max;
				max=a[j];
			}
			else
			{
				if(a[j]>submax&&a[j]!=max)
				{
					submax=a[j];
				}
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