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
	int n,i,j,numm=-1,numf=-1;
	double e,h[40],m[39]={0},f[39]={39};
	char sex[40][7];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %lf",sex[i],&h[i]);
		if(sex[i][0]=='m')
		{
			numm++;
			m[numm]=h[i];
		}
		else
		{
			numf++;
			f[numf]=h[i];
		}
	}
	for(j=1;j<=numm;j++)
	{
		for(i=0;i<=numm-j;i++)
		{
			if(m[i]>m[i+1])
			{
				e=m[i];
				m[i]=m[i+1];
				m[i+1]=e;
			}
		}
	}
	for(j=1;j<=numf;j++)
	{
		for(i=0;i<=numf-j;i++)
		{
			if(f[i]<f[i+1])
			{
				e=f[i];
				f[i]=f[i+1];
				f[i+1]=e;
			}
		}
	}
	for(i=0;i<=numm;i++)
	{
		printf("%.2lf ",m[i]);
	}
	for(i=0;i<numf;i++)
	{
		printf("%.2lf ",f[i]);
	}
	printf("%.2lf",f[numf]);
	return 0;
}