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
	int n,m,a[100],*p,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	p=&a[n-m];
	printf("%d",*p);
	for(i=1;i<m;i++)
		printf(" %d",*(p+i));
	p=a;
	for(i=0;i<(n-m);i++)
		printf(" %d",*(p+i));
}
