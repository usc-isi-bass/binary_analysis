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
	int m;
	scanf("%d",&m);
	int n[500];
	double sum;
	int i,j,fm[500],fz[500];
	fm[0]=1;
	fm[1]=2;
	fz[0]=2;
	fz[1]=3;
	for(i=2;i<500;i++)
	{
		fm[i]=fm[i-1]+fm[i-2];
		fz[i]=fz[i-1]+fz[i-2];
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&(n[i]));
	}
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n[i];j++)
		{
			sum=sum+1.0*fz[j]/fm[j];
		}
		printf("%.3lf\n",sum);
	}
}

    