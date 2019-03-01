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
	int a[100],n,i,b;
	int * p;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	p=&a[n-1];
	for(i=0;i<n-1;i++) 
	{
		b= * p;
		printf("%d ",b);
		p=p-1;
	}
	b= * p;
	printf("%d",b);
	return 0;
}