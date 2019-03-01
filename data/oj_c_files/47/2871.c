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
	int n,a[101];
	int *p;
	scanf("%d",&n);
	for(p=a;p<=a+n-1;p++)
	{
		scanf("%d",p);
	}
	p=a+n-1;
	printf("%d",*p);
	for(p=a+n-2;p>=a;p--)
	{
		printf(" %d",*p);
	}
	return 0;
}