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
	int i,m,n,a[100],*p;
	scanf("%d %d",&m,&n);
	for (i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	for (i=0;i<m-n;i++)
	{
		*(p+m)=*p++;
	}
	p=a+m-n;
	printf("%d",*p);
	for (i=1;i<m;i++)
	{
		printf(" %d",*++p);
	}
}