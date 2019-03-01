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
	int n,i,k,m=0,f=0;
	char s[40][10];
	double c[40];
	double a[40]={0};
	double b[40]={0};
	double e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		scanf("%lf",&(c[i]));
	}
    for(i=0;i<n;i++)
	{
		if(s[i][0]=='m')
		{
			a[i]=c[i];
			m++;
		}
		if(s[i][0]=='f')
		{
			b[i]=c[i];
			f++;
		}
	}
	for(k=1;k<=40;k++)
	{
		for(i=0;i<40-k;i++)
		{
			if(a[i]>a[i+1])
			{
				e=a[i+1];
				a[i+1]=a[i];
				a[i]=e;
			}
		}
	}
    for(k=1;k<=40;k++)
	{
		for(i=0;i<40-k;i++)
		{
			if(b[i]>b[i+1])
			{
				e=b[i+1];
				b[i+1]=b[i];
				b[i]=e;
			}
		}
	}
   for(i=40-m;i<40;i++)
	{
		printf("%.2lf ",a[i]);
	}
   for(i=39;i>40-f;i--)
	{
		printf("%.2lf ",b[i]);
	}
   printf("%.2lf",b[40-f]);
    return 0;
}