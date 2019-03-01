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
	int a[100],i,d=0,n,e;
	double b,c,s[100];
	scanf("%d",&n);
	scanf("%lf%lf",&b,&c);
	s[0]=c/b;
	for(i=1;i<n;i++)
	{
		scanf("%lf%lf",&b,&c);
		s[i]=c/b;
	}
	for(i=1;i<n;i++)
	{
		if(s[i]-s[0]>=0.05)
		{
			printf("better\n");
		}
		if(s[i]-s[0]<=-0.05)
		{
			printf("worse\n");
		}
		if(s[i]-s[0]<0.05&&s[i]-s[0]>-0.05)
		{
			printf("same\n");
		}
	}
	return 0;
}