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
{int n,m,i,j,k,a[100000];
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for (i=0;i<n-1;i++)
	{
		if (a[i]==k)
		{
			for (j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			i--;
			n--;
		}
	}
	if (a[n-1]==k)
	{
		m=n-1;
	}
	else m=n;
	for (i=0;i<m-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[m-1]);
	return 0;
}