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
	int n,m,i,a[10000];
	int *p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(p=a+n;p<(a+n+n-m);p++)
		*p=*(p-n);
	p=(a+n-m);
	printf("%d",*p);
	for(p=(a+n-m+1);p<(a+n+n-m);p++)
		printf(" %d",*p);
}