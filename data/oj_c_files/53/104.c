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
	int i,j,n,a[300];
	int *p;
	p=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=797)
		{
			for(j=1;j<n-i;j++)
			{
			
				if(*(p+i)==*(p+i+j))
					*(p+i+j)=797;
			}
		}
	}
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		if(*(p+i)!=797)
			printf(",%d",*(p+i));
	}
	return 0;
}


