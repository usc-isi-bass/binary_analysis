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
	int n,a[100],i,m1=0,m2=0,j;
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	for (i=0;i<n;i++) if (a[i]>m1) {m1=a[i]; j=i;}
	a[j]=0;
	for (i=0;i<n;i++) if (a[i]>m2) m2=a[i];
	printf("%d\n%d\n",m1,m2);
}
