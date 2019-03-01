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
	int n,a[128],*p;
	scanf("%d",&n);
	for(p=a+n;p>=a+1;p--)
		scanf("%d",p);
	for(p=a+1;p<=a+n-1;p++)
		printf("%d ",*p);
	printf("%d",*p);
}