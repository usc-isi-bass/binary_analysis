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
	int n,m,i,a[200],k,l,o;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
       scanf("%d",&a[i]);
	for(k=n-1;k>=0;k--)
		a[k+m]=a[k];
	for(l=0;l<m;l++)
		a[l]=a[n+l];
	for (o=0;o<n-1;o++)
		printf("%d ",a[o]);
	printf("%d\n",a[n-1]);
}