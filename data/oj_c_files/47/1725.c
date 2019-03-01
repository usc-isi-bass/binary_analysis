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
	int a[1000],b[1000];
	int n,i;
	int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	for(i=0;i<n;i++)
	{
		b[i]=*(p+n-i-1);
	}
	printf("%d",b[0]);
	for(i=1;i<n;i++)
		printf(" %d",b[i]);
}


