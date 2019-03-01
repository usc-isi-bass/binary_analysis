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
	int a[15]={0},i=0,j=0,m=0;
    scanf("%d",&a[0]);
	while(a[i]!=0)
	{
		scanf("%d",&a[i+1]);
		i=i+1;
	}
    i=0;
	while(a[0]!=-1)
	{
		while(a[i]!=0)
		{
			while(a[j]!=0)
			{
				if(((float)a[j])/((float)a[i])==2)
					m=m+1;
				j=j+1;
			}
			j=0;
            i=i+1;
		}
		printf("%d\n",m);
        i=0;
		m=0;
        scanf("%d",&a[0]);
	    while(a[i]!=0)
		{
			scanf("%d",&a[i+1]);
		    i=i+1;
		}
    i=0;
	}
}
