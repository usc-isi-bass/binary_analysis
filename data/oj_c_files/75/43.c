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
	int time[1000]={0},a[5000],b[5000],i=1,m,max=0,k,n;
	scanf("%d",&a[0]);
	while(scanf(",%d",&m))
	{
		a[i]=m;
		i++;
	}
	scanf("%d",&b[0]);
	i=1;
	while(scanf(",%d",&m))
	{
		b[i]=m;
		i++;
	}
	n=i;
	for(i=0;i<n;i++)
	{
		for(k=a[i];k<b[i];k++)
		{
			time[k]++;
		}
	}
	for(i=0;i<1000;i++)
	{
		if(time[i]>max)
			max=time[i];
	}
	printf("%d %d",n,max);
}

