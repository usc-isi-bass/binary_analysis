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

int main()
{
	int n,i,a[300],j=0,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (k=0;k<=j;k++)
			if (a[j]==a[k])
				break;
			if (k==j)
			{
				printf("%d",a[j]);
			}
	for(j=1;j<n;j++)
	{
		for (k=0;k<=j;k++)
			if (a[j]==a[k])
				break;
			if (k==j)
			{
				printf(",%d",a[j]);
			}
	}
	return 0;
}