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
	int a[300],n,s=0,i,j;
	double x,t=0;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	x=(double)s/n;
	for(i=0; i<n; i++)
	{
		for(j=n-1; j>i; j--)
		{
			if(a[j]<a[j-1])
			{
				int tem=a[j];
				a[j]=a[j-1];
				a[j-1]=tem;
			}
		}
	}
	if((a[n-1]-x)==(x-a[0]))
		printf("%d,%d",a[0],a[n-1]);
	else if((a[n-1]-x)<(x-a[0]))
        printf("%d",a[0]);
	else if((a[n-1]-x)>(x-a[0]))
        printf("%d",a[n-1]);
	else
		printf("ghjk");
	return 0;
}


    
        
