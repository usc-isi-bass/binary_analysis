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
	int n,i,j,k,a[300],b,c;
	scanf("%d",&n);
	for(i=0,k=0;i<n;i++)
	{
		scanf("%d",&b);
		c=1;
		for(j=0;j<k;j++)
		{
			if(a[j]==b)
			{
				c*=0;
				break;
			}
		}
		if(c)
			a[k++]=b;
	}
	for(i=0;i<k-1;i++)
		printf("%d,",a[i]);
	printf("%d",a[i]);
}