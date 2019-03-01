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
	int n,i,*p;
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p--;
	for(;i>0;i--,p--)
	{
		if(i==n)
			printf("%d",*p);
		else
			printf(" %d",*p);
	}
	return 0;
}