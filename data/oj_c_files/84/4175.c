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
	int a[100];
	int n,i,t;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf("%d",&a[i]);

	for (i=1;i<=n-1;i++)
		if (a[i]>a[i+1])
		{
			t=a[i];a[i]=a[i+1];a[i+1]=t;
		}
	printf("%d\n",a[n]);

	for (i=1;i<=n-2;i++)
		if (a[i]>a[i+1])
		{
			t=a[i];a[i]=a[i+1];a[i+1]=t;
		}
    printf("%d\n",a[n-1]);
	return 0;
}