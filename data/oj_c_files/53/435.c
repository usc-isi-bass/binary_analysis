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
	int n,i,a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[300],j;int p=0;
	for(i=0;i<n;)
	{
		if(i==0) {b[p]=a[i];p++;i++;}
        else
		{
			for(j=0;j<i;j++)
			{
			  
			   if(a[i]==a[j]) 
			   { 
				   if(i<n-1)
				   {i++;j=0;}
				   else goto stop;
			   }
			}
		b[p]=a[i];p++;i++;
		}
		
	}
stop:  p=p-1;
	for(i=0;i<p;i++)
	{
		printf("%d,",b[i]);
	}
	printf("%d",b[i]);


}