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



	int main(int argc, char* argv[])
{
	int n,i=0,j=0,r[300],sum=0,l=0,k=0;
	double aver,cha[300],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&r[i]);
		sum=sum+r[i];
	}
	aver=sum*1.0/n;
	for(i=0;i<n;i++)
	{
		cha[i]=fabs(aver-r[i]);
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]>max)
		{
			max=cha[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]==max)
		{
			l++;
		}
		
	}
	if(l==0)
	{
		for(i=0;i<n;i++)
		{
			if(cha[i]==max)
			{
				printf("%d",r[i]);
			}
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(cha[i]==max)
			{
				k++;
				if(k<l)
				{
					printf("%d,",r[i]);
				}
				else
				{
					printf("%d",r[i]);
				}
			}
		}
	}
	return 0;

}
