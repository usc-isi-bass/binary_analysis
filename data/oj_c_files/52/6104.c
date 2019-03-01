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
	int a[101]={0};
	int n,m;
	scanf("%d %d", &n, &m);
	int i,j,num=0,p,q;
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-m;i++)
	{
		num=a[i];
		a[n+i]=num;
	}
	p=n-m;
	q=2*n-m;
	for(i=p;i<q-1;i++)
	{
        printf("%d ", a[i]);
	}
	printf("%d", a[q-1]);
}