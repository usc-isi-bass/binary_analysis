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
	int n,sum,a,i,min,max,ci,ca;
	float ave;
	scanf("%d",&n);
	scanf("%d",&a);
	min=max=sum=a;
	ci=ca=1;
	for(i=1;i<n;i++)
	{
		scanf("%d",&a);
		if(a>max)
		{
			max=a;
			ca=1;
		}
		else if(a==max)
			ca++;
		if(a<min)
		{
			min=a;
			ci=1;
		}
		else if(a==min)
            ci++;
		sum=sum+a;
	}
	ave=(float)sum/n;
	if(2*ave>(max+min))
	{
		for(i=0;i<ci-1;i++)
			printf("%d,",min);
		printf("%d\n",min);
	}
	else if(2*ave<(max+min))
	{
		for(i=0;i<ca-1;i++)
			printf("%d,",max);
		printf("%d\n",max);
	}
	else
	{
		for(i=0;i<ci;i++)
			printf("%d,",min);
		for(i=0;i<ca-1;i++)
			printf("%d,",max);
		printf("%d\n",max);
	}
}