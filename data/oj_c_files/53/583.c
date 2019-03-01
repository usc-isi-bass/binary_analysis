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
	int a[n],*p=a,i;
	int b[n],*q=b,j,x=1;
	for(i=0;i<n;i++)
		scanf("%d",&(*(p+i)));
	*q=*p;
	for(i=1;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
			if(*(p+i)==*(q+j)) break;
		}
		if(j==x)
		{
			*(q+x)=*(p+i);
			x=x+1;
		}
	}
    for(i=0;i<(x-1);i++)
		printf("%d,",*(q+i));
	printf("%d",*(q+x-1));
return 0;
}