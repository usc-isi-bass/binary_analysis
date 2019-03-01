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
	double num[300]={0},a[300]={0};
	int i;
	int c=0;
	double max=0;
	double t,ping=0;

	scanf("%lf",&t);

	for(i=0;i<t;i++)
		scanf("%lf",&num[i]);
	for(i=0;i<t;i++)
		ping=ping+num[i];
	ping=ping/t;
	for(i=0;i<t;i++)
		a[i]=fabs(num[i]-ping);
	for(i=0;i<t;i++)
		if(max<a[i])
			max=a[i];
	for(i=0;i<t;i++)
	{
		if(a[i]==max)
		{
			c++;
			if(c==1)
				printf("%.0f",num[i]);
			else
				printf(",%.0f",num[i]);
		}
	}	

}