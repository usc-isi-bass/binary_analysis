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
	struct
	{
		char a[12];
		double b;
	}
	q[50];
	char e[50];
	double d[50],k;
	int i,j,l,n;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%s %lf",q[i].a,&q[i].b);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(q[j].b>q[j+1].b)
			{
				k=q[j].b;
				q[j].b=q[j+1].b;
				q[j+1].b=k;
				strcpy(e,q[j].a);
				strcpy(q[j].a,q[j+1].a);
				strcpy(q[j+1].a,e);
			}
		}
	}

	for(i=0;i<=n-1;i++)
	{
		if(q[i].a[0]=='m')
		{
			printf("%.2lf ",q[i].b);
			
		}
	}
	l=0;
	for(i=n-1;i>=0;i--)
	{
		if(q[i].a[0]=='f')
		{
			d[l]=q[i].b;
			l++;
		}
	}
	for(i=0;i<=l-2;i++)
		printf("%.2lf ",d[i]);
	printf("%.2lf",d[l-1]);
	return 0;
}
			

	