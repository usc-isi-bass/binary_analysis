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
	int a[100],b[100],n,i,*p,*q;
	scanf("%d",&n);
	for(p=a;p<a+n;p++)
		scanf("%d",p);
	q=b;
	p--;
	for(i=0;i<n;i++)
		*q++=*p--;
	q=b;
	for(i=0;i<n-1;i++)
		printf("%d ",*q++);
	printf("%d",*q);
}