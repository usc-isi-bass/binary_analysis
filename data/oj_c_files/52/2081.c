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

void tz(int a[],int n,int m);
void main()
{
	int a[20];
	int m,n,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	tz(a,n,m);
}
void tz(int a[],int n,int m)
{
	int *p;
	for(p=a+n-m+1;p<=a+n;p++)
		printf("%d ",*p);
	for(p=a+1;p<a+n-m;p++)
		printf("%d ",*p);
         printf("%d\n",*p);
}
