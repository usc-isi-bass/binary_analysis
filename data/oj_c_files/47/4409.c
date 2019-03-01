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
	int i,a[100],b[100],n;
	scanf("%d",&n);
	i=1;
	while (i<=n)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=1;
	while (i<=n)
	{
		b[n+1-i]=a[i];
		i=i+1;
	}
	i=1;
	while (i<=n-1)
	{
		printf("%d ",b[i]);
		i=i+1;
	}
    printf("%d",b[i]);
}