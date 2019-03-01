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
	int a[200000],b=0,n,i,j,k;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for (i=0;i<n;i++)
	{
		if (a[i]==k)
		{
			b++;
			for (j=i+1;j<n+1;j++)
				a[j-1]=a[j];
			i--;
		}
	}
	for (i=0;i<n-b-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-b-1]);
	return 0;
}