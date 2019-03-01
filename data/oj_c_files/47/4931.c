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
	int n;
	int a[100],b[100];
	int*p,*q;
	scanf("%d",&n);
	q=b+n-1;
	for(p=a;p<a+n;p++)
	{
		scanf("%d",p);
		*q=*p;
		q--;
	}
	q=b;
	printf("%d",*q);
	for(q=b+1;q<b+n;q++)
	{
		printf(" %d",*q);
	}
}
	