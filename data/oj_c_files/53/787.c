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
	int a[300]={0};
	int n,*p,*q,*r,i,j,count=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
				break;
		}
		if (j==n)
			count++;
	}
	for(p=a+n-1;p>a;p--)
	{
		for(q=a;q<p;q++)
		{
			if (*p==*q)
			{
				for(r=p;r<a+n;r++)
					*r=*(r+1);
			}
		}
	}
	printf("%d",a[0]);
	for(i=1;i<count;i++)
		printf(",%d",a[i]);
}