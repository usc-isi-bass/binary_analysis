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
	int i,a[100000],n,k,t=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
		scanf("%d",&k);
    	for (i=0;i<n;i++)
		{
			if(a[i]!=k)
				a[i-t]=a[i];
			else
				t=t+1;
		}
		for(i=0;i<n-t-1;i++)
			printf("%d ",a[i]);
		printf("%d",a[n-t-1]);
}
