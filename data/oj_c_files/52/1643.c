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
	int m,n,i,j,x;
	int *p1,*p2;
	int a[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p1=&a[n-m];p2=&a[0];
	for(x=0;x<m;x++)
		printf("%d ",*(p1+x));
	for(j=0;j<=n-m-2;j++)
		printf("%d ",*(p2+j));
	printf("%d",*(p2+n-m-1));
}