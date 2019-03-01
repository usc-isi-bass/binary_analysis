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
	int n,num[300],i,count=0,j;
	float sum=0,ave,cha[300],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	ave=sum/n;
	for(i=0;i<n;i++)
	{
		cha[i]=fabs(num[i]-ave);
		if(cha[i]>max)
		{
			max=cha[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]==max)
		{
			count++;
		}
	}
	if(count==1)
	{
		for(i=0;i<n;i++)
		{
			if(cha[i]==max)
			{
				printf("%d",num[i]);
			}
		}
	}
	if(count==2)
	{
		for(i=0;i<n;i++)
		{
			if(cha[i]==max&&num[i]<ave)
			{
				printf("%d,",num[i]);
			}
			if(cha[i]==max&&num[i]>ave)
			{
				printf("%d",num[i]);
			}
		}
	}
	return 0;
}