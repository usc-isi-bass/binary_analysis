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
	int a[200],n,m,i;
	int *p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	for(i=n;i<=n+n-m;i++)
	{*(a+i)=*(a+i-n);}
	p=a+n-m;
	printf("%d",*p);
	for(i=0,p++;i<n-1;i++,p++)printf(" %d",*p);
}

