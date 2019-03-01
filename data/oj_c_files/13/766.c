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
	int n,a[20000],b[20000],i,j,k=0;
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i;j++)
		{
			{
			if (a[i]==a[j])
				a[i]=0;
			else
				a[i]=a[i];
			}
		}
		if (a[i]!=0)
		{
			b[k]=a[i];
	    	k=k+1;
		}
	}

		for (i=0;i<k-1;i++)
		{
		printf("%d ",b[i]);
		}
		printf("%d",b[k-1]);
}