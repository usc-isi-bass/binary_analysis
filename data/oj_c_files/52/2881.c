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
	int n,i,m;
	long a[200];
	scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
scanf("%ld ",&a[i]);
for(i=n-1;i>=0;i--)	
	a[i+m]=a[i];
for(i=0;i<m;i++) a[i]=a[i+n];
printf("%ld",a[0]);
for(i=1;i<n;i++)
printf(" %ld",a[i]);
}