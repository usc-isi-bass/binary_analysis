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
	int i,n,*p;
	scanf("%d",&n);
	p=(int *)(malloc(n*sizeof(int)));
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=n-1;i>0;i--)
	{
		printf("%d ",*(p+i));
	}
	printf("%d",*(p+i));
}