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
	int a[300],n,*p=a,i,j,t;
	scanf("%d",&n);
	scanf("%d",&t);
	*p=t;
	j=1;
	printf("%d",t);
	for(i=2;i<=n;i++)
	{
		scanf("%d",&t);
		for(p=a;p<a+j;p++)
		{
			if(*p==t) goto z;
		}
		*p=t;
		j++;
		printf(",%d",t);
z:		;
	}
}