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
	int age[100];
	int i;
	double a=0,b=0,c=0,d=0,n;
	scanf("%lf",&n);
	for(i=0;i<n;i++)
		scanf("%d",&age[i]);
	for(i=0;i<n;i++)
	{
		if(age[i]<=18)
			a+=1;
		else if(age[i]>=19&&age[i]<=35)
			b+=1;
		else if(age[i]>=36&&age[i]<=60)
			c+=1;
		else
			d+=1;

	}
	printf("1-18: %.2lf%%\n",a/n*100);
	printf("19-35: %.2lf%%\n",b/n*100);
	printf("36-60: %.2lf%%\n",c/n*100);
	printf("60??: %.2lf%%",d/n*100);
}