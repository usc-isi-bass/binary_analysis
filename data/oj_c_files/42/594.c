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
	int n,k,a[100000],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n");
	scanf("%d",&k);
    for(i=0,j=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			a[j]=a[i];
			j++;
		}
	}
	for(i=0;i<(j-1);i++)
		printf("%d ",a[i]);
	printf("%d",a[j-1]);
	printf("\n");
}
