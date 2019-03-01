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
	int  n,i,a[300],k,num=0;
	double ave,b[300],sum=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	for(i=0;i<n;i++)
	{
		b[i]=fabs(a[i]-ave);
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			num++;
			if(num==1)
				printf("%d",a[i]);
			else
				printf(",%d",a[i]);
		}
	}
	printf("\n");
}