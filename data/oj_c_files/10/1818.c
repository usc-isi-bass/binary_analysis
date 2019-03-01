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
	int n,i,j,max=1;
	int a[25];
	int b[25];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}

	for(i=1;i<n;i++)
		for(j=0;j<i;j++)
		{
			if(a[i]<=a[j]&&b[i]<b[j]+1)
			{
				b[i]=b[j]+1;
				if(b[i]>max)
					max=b[i];
			}
		}

	printf("%d\n",max);
}