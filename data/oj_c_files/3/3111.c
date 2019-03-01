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
	int n,k;
	int *p;
	scanf("%d%d",&n,&k);
	p=(int *)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	int judge=0;
	int j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)+*(p+j)==k)
			{
				judge=1;
				break;
			}
		}
		if(judge)
			break;
	}
	if(judge)
		printf("yes");
	else
		printf("no");
}
