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
	int n,a[300],i,j,k;
	int *p;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n-1;i++)
		scanf("%d ",p+i);
	scanf("%d",p+n-1);
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(*(p+i)!=*(p+j))
				k=0;
			else
			{
				k=1;break;
			}
		if(k==0)
			printf(",%d",*(p+i));
	}
    printf("\n");
}
