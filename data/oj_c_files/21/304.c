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
	int i,n,k=0,j,sum=0,max=0;
	
	int a[300],c[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{	sum+=a[i];}


	for(i=0;i<n;i++)
	{if(n*a[i]-sum>=max)
			 max=n*a[i]-sum;
		 else if(sum-n*a[i]>=max)
			 max=sum-n*a[i];
	}

	for(i=0;i<n;i++)
		if(n*a[i]-sum-max==0||sum-n*a[i]-max==0)
		{	c[k]=a[i];k++;}

		for(j=0;j<k;j++)
			printf("%d%c",c[j],(j!=k-1)?',':'\n');
}

