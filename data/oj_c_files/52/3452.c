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
	int a[100],n ,m ,i;
	int *p=a;
	scanf("%d %d",&n, &m);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[n-m]);
	for(p=&a[n-m]+1;p<=&a[n-1];p++)
	{
		printf(" %d",*p);
	}
	for(p=a;p<=a+n-m-1;p++)
	{
		printf(" %d",*p);
	}
	return 0;
}