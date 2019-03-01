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
	int n,a[30],i,b[30],j;	
	scanf("%d",&n);		
	for(i=0;i<n;i++)	
	{	
	scanf("%d",&a[i]);	
	b[i]=1;
	}	
	for(i=0;i<n;i++)	
	{
		for(j=0;j<i;j++)
	
		{
			if(a[j]>=a[i])
			{
				if(b[j]>=b[i])
					b[i]=b[j]+1;
			}
		}
	}
	
	for(j=0;j<n-1;j++)	
	{
		if(b[j]>b[j+1])
		b[j+1]=b[j];
	}	
	printf("%d\n",b[n-1]);
}