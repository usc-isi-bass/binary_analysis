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
	int n;
	int i,j,k=1;
	struct qujian
	{
		int a;
		int b;
	}q[50000],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&q[i].a,&q[i].b);

	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(q[i].a>q[j].a)
			{
				t=q[j];
				q[j]=q[i];
				q[i]=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(q[i+1].a>q[i].b)
		{
			printf("no\n");
			k=0;
			break;
		}
		else
		{
			q[i+1].a=q[i].a;
			q[i+1].b=(q[i].b>q[i+1].b)?q[i].b:q[i+1].b;
		}
	}
	if(k)
	{
		printf("%d %d\n",q[n-1].a,q[n-1].b);
	}
	return 0;
}
