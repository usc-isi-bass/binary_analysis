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

main()
{
	int a[200];
	int i,j,m,n;
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n-m;i++)
	{
		j=i+m+n;
		a[j]=a[i];
	}
	for (i=n-m;i<n;i++)
	{
		j=i+m;
		a[j]=a[i];
	}
	printf("%d",a[n]);
	for (i=n+1;i<2*n;i++)
		printf(" %d",a[i]);
	return(0);
}