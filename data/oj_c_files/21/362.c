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
	float a[300],c[300],pingjun,s=0,t,max=0,m,x;
	int n,i,j,jishuqi=0,k=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%f",&a[i]);
		s=s+a[i];
	}
	pingjun=s/n;
	for(j=0;j<=n-1;j++)
	{
		if(fabs(a[j]-pingjun)>max)
		{
			max=fabs(a[j]-pingjun);
		}
	}
	m=pingjun-max;
    x=pingjun+max;
	for(j=0;j<=n-1;j++)
	{
		if(a[j]<=m||a[j]>=x)
		{
			
			c[jishuqi]=a[j];
			jishuqi=jishuqi+1;
		}
	}
	if(jishuqi==1)
	{

		printf("%d",(int)(c[jishuqi-1]));
	}
	if(jishuqi>=2)
	{
		for(i=0;i<=jishuqi-2;i++)
			for(j=0;j<=jishuqi-2-i;j++)
			{
				if(c[j]>c[j+1])
				{
					t=c[j];
					c[j]=c[j+1];
					c[j+1]=t;
				}
			}
		printf("%d",(int)(c[0]));
		for(i=1;i<=jishuqi-1;i++)
		{
			printf(",%d",(int)(c[i]));
		}
	}
}