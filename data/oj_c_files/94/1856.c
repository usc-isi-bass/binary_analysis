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
	int n,a[500],b[500],i,j=0,t,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[j]=a[i];
			j=j+1;
		}
	}
	t=j;
	for(j=0;j<t-1;j++)
		for(i=0;i<t-1-j;i++)
			if(b[i]>b[i+1])
			{k=b[i];
			b[i]=b[i+1];
			b[i+1]=k;
			}
	for(j=0;j<t;j++)
	{
		if(j==0)
		printf("%d",b[j]);
		else printf(",%d",b[j]);
	}
}
