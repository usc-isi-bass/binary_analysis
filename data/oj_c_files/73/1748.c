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
	int a[5][5],i,j,s,t,max=0,hang,lie,m=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<5;i++)
	{
max=0;
		t=0;
		for(s=0;s<5;s++)
		{
			if(a[i][s]>=max)
			{
				max=a[i][s];hang=i;lie=s;
			}
		}
		for(j=0;j<5;j++)
		{
			if(max>a[j][lie])
				t++;
		}
		if(t==0)
		{	printf("%d %d %d",hang+1,lie+1,max);
		    m++;
		}
	}
	if(m==0)
		printf("not found");
	return 0;
}