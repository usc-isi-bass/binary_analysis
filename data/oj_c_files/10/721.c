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
	int m,a[25],b[25],i,j,t,s=0;
    scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	    for(j=0,t=0;j<i;j++)
		{
			if(a[j]>=a[i])
			{
				if(b[j]>t)t=b[j];
			}
		}
	    b[i]=1+t;
        if(b[i]>s)s=b[i];
	}
	printf("%d",s);
}
