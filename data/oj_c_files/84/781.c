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
	int m[100],i=3,k,max,min;
	scanf("%d\n",&k);
	scanf("%d\n%d\n",&(m[1]),&(m[2]));
	{
		if(m[1]>m[2])
	{
		max=m[1];
		min=m[2];
	}
	else
	{
		max=m[2];
		min=m[1];
	}
	for(i=3;i<k+1;i++)
	{
		scanf("%d\n",&m[i]);
		if(m[i]>max)
		{
			min=max;
			max=m[i];
		}
		else
			if(m[i]>min)
			min=m[i];
	}
	}
	printf("%d\n%d\n",max,min);
	
	return 0;
}
