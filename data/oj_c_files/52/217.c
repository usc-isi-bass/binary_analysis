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
	int i,n,m,a[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n;i<2*n-m;i++)
	 a[i]=a[i-n];
    printf("%d",a[n-m]);
    for(i=n-m+1;i<2*n-m;i++)
		printf(" %d",a[i]);
   printf("\n");
}