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
		long a[1000000],t=0,i,j,n,m;
		scanf ("%ld\n",&n);
for (i=0;i<n;i++)
{
	scanf ("%ld",&a[i]);
}
scanf ("%ld",&m);
for (i=0,t=0;i<n;i++)
{
	if (a[i]==m) continue;
	else {a[n+t]=a[i];t++;}
}
for (i=n;i<n+t-1;i++)
{
	printf ("%ld ",a[i]);
}
if (t!=0)
printf ("%ld",a[n+t-1]);
}
