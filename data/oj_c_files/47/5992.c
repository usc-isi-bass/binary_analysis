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

void main(int argc, char* argv[])
{
	int a[100],b[100];
	int i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[n-1-i]=a[i];
	}
	for (i=0;i<n;i++)
	{
		if (i==n-1)
		{
			printf("%d",b[i]);
		}
		else
		{
			printf("%d ",b[i]);
		}
	}
}
