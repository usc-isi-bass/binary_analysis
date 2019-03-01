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
	int n,i,j;
	int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int b[300];
	int x=1,y;
	b[0]=a[0];
    for(i=1;i<n;i++)
	{
		y=1;
	    for(j=0;j<i;j++)
		{
		     if(a[i]==a[j])
			 {
				 y=0;
			     break;
			 }
		}
	    if(y==1)
		{
			b[x]=a[i];
			x=x+1;
		}
	}
	x=x-1;
	for(i=0;i<x;i++)
	{
		printf("%d",b[i]);          
		printf(",");
	}
	printf("%d\n",b[x]);

}
