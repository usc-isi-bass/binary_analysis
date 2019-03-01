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
	int *p,*q;
	int m,n,i;
	scanf("%d%d",&n,&m);
	p=(int*)malloc((sizeof(int))*n);
	q=(int*)malloc((sizeof(int))*n);
	for (i=0;i<n;i++)
		scanf("%d",&p[i]);
	for(i=0;i<n-1;i++)
	{
		*q=p[(n-m+i)%n];
		printf("%d ",*q);
		q++;
	}
	printf("%d",p[n-m-1]);
	return 1;
}