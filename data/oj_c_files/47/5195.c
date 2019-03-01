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
	int i,n;
	scanf("%d",&n);
	int a[100];
	int *p=a;
	int *e=p+(n-1);
	for(i=0;i<n;i++,p++)
 		scanf("%d",p);
	for(i=0;i<n-1;i++,e=e-1)
		printf("%d ",*e);
	printf("%d",*e);
}