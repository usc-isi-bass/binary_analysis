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
	int h[25], num[25], k, n, i, j, max, flag;
	scanf("%d",&n);
	for (i=0; i<n; i++) 
	{
		scanf("%d",&h[i]);
		num[i]=0;
	}
	for (i=0; i<n; i++)
	{
		k=0;
		flag=0;
		for (j=0; j<i; j++)
			if (h[j]>=h[i]) 
			{
				if (!flag) {k=j;flag=1;}
				else if(num[j]>num[k]) k=j;
			}
		if (flag) num[i]=num[k]+1;
		else num[i]=1;
	}
	max=0;
	for (i=0; i<n; i++)
		if (num[i]>max) max=num[i];
	printf("%d\n",max);
}
