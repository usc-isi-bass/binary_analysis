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
	float num[300];
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f",&num[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[j]==num[i])num[j]=1.1;
			k++;
		}
	}
	if(k==n-1)printf("%.0f",num[0]);
	else
	{
		printf("%.0f",num[0]);
		for(i=1;i<n;i++)
		{ 
			if(fabs(num[i]-1.1)>0.09)
			printf(",%.0f",num[i]);
		}
	}
}