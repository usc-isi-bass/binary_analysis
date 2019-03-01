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

int main()
{
	int *p,i,a[100],n,m;
	p=a;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)scanf("%d",p++);
	for(i=0,p=a+n-m;i<m;i++,p++)printf("%d ",*p);
	for(i=0,p=a;i<n-m-1;i++,p++)printf("%d ",*p);
	printf("%d",*p);
}