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
	int a[20];
	int i,j,k;
	int count;
	do
	{
	    i=0;
		count=0;
		do
		{
			scanf("%d",&a[i]);
			for(k=0;i>0 && k<i;k++)
			{
				if(a[i]/2.0==a[k] || a[i]*2==a[k])
					count=count+1;
			}
			i=i+1;
		}
		while(a[i-1]!=0 && a[0]!=-1);
		if(a[0]!=-1)
			printf("%d\n",count);
	}
	while(a[0]!=-1);
}


