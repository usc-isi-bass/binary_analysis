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
	int n,a[100],*p=a;
	scanf("%d",&n);
	p=p+n-1;
	for(;p>=a;p--)
		scanf("%d ",p);
	p=a;
	for(p=a;p<a+n-1;p++)
		printf("%d ",*p);
                  printf("%d",*p);
}