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
	int n,high[30],point,m,sum1,sum2,check;
	scanf("%d",&n);
	for (m=0;m<n;m++)
		scanf("%d",&high[m]);
	for(check=1;check==1;)
	{
		check=0;
		for(point=0;point<n-1;point++)
		{
		if(high[point]<high[point+1])
		{
			check=1;
			for(m=0,sum1=0;m<point;m++)
				if(high[m]<high[point+1]) sum1++;
			for(m=point+2,sum2=0;m<n;m++)
				if(high[m]>high[point]) sum2++;
			if(sum1>sum2)
			{
				for (m=point+1;m<n-1;m++)
				{
					high[m]=high[m+1];
				}
			}
			else
			{
				for (m=point;m<n-1;m++)
				{
					high[m]=high[m+1];
				}
				point--;
			}
			n--;
		}
		}
	}
	printf("%d\n",n);
}
	
