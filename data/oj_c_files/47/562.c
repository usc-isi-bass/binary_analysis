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
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		a[i]=x;
	}
	int *pi=a;
	int *pj=a+n;
	int t;
	for(;pi<pj;pi++,pj--)
	{
		t=*pi;
		*pi=*pj;
		*pj=t;
	}
	for(int k=1;k<n;k++)
	{
		printf("%d ",a[k]);
	}
         printf("%d",a[n]);
	return 0;
}
