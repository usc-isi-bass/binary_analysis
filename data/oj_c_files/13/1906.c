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
	int n,*a,i,j,r,d=0;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d",&*(a+i));
	for(i=0;i<n;i++)
	{
		r=0;
		for(j=0;j<i;j++)
		{
			if(*(a+i)==*(a+j))
				r=1;
		}
		if(r==0&&d==0)
		{printf("%d",*(a+i));d=1;}
		else if(r==0&&d==1)
			printf(" %d",*(a+i));
	}
	return 0;
}