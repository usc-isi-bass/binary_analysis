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
	int n,m,i,a[100];
	int *p;
	scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	p=&a[0];
	printf("%d",*(p+n-m));
	for(i=n-m+1;i<=2*n-m-1;i++)
		printf(" %d",*(p+i%n));
}