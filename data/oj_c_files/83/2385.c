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

main()
{
	int n,s,i;
	int a[10],b[10];
	float c[10];
	float sum,q;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		if(b[i]>=90)
			c[i]=4.0;
		else if(b[i]>=85)
			c[i]=3.7;
		else if(b[i]>=82)
			c[i]=3.3;
		else if(b[i]>=78)
			c[i]=3.0;
		else if(b[i]>=75)
			c[i]=2.7;
		else if(b[i]>=72)
			c[i]=2.3;
		else if(b[i]>=68)
			c[i]=2.0;
		else if(b[i]>=64)
			c[i]=1.5;
		else if(b[i]>=60)
			c[i]=1.0;
		else c[i]=0;
	}
	sum=0;s=0;
	for(i=0;i<n;i++)
		sum=sum+a[i]*c[i];
	for(i=0;i<n;i++)
		s=s+a[i];
	q=sum/s;
	printf("%.2lf",q);
}









	

