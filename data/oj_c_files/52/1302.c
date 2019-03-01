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
	int a[100],b[100],n,m,i;

	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<n-m;i++)
		b[m+i]=a[i];
	for(i=0;i<m;i++)
		b[i]=a[n-m+i];
	for(i=0;i<n-1;i++)
		printf("%d ",b[i]);
	printf("%d",b[n-1]);
}