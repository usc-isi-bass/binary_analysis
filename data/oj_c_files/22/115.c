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
	int i=0,max,max2=0,n,d[300];
	char c;
	do
	{
		scanf("%d%c",&d[i],&c);
		i++;
	}while(c==',');
	n=i;
	max=d[0];
	for(i=1;i<n;i++)
	{
		if(d[i]>max)
		{
			max2=max;
			max=d[i];
		}
		else
		{
			if(d[i]>max2&&d[i]<max)
				max2=d[i];
		}
	}
	if(max2==0)printf("No");
	else
		printf("%d",max2);
}
