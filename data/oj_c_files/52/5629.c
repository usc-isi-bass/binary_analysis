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
	int a[105];
	int n,m;
	scanf("%d %d",&n,&m);
	for (int *w=a+m,i=0;i<n-m;i++,w++)
	{
		scanf("%d",w);
	}
	for (int *w=a,i=0;i<m;i++,w++)
	{
		scanf("%d",w);
	}
	for (int *r=a,i=0;i<n-1;i++,r++)
	{
		printf("%d ",*r);
	}
	printf("%d",*(a+n-1));
	return 0;
}