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
	int m,n,i,j,k;
	int a[200];
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	for (i=n-m;i<n;i++) printf("%d ", a[i]);
	for (i=0;i<n-m-1;i++) printf("%d ", a[i]);
	printf("%d",a[n-m-1]);
}
