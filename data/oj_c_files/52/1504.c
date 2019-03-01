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
	int a[200],i,n,m,k,h;
	scanf("%d %d",&n,&m);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-m-1;i++)
		a[n+i]=a[i];
	k=(n-m);
	h=(2*n)-m;
	for(i=k;i<h-1;i++)
		printf("%d ",a[i]);
	i=h-1;
	printf("%d",a[i]);
}