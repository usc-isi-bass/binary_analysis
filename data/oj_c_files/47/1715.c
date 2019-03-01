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
	int A[100],i,j,t=0,n;
	int *pt;
	pt=A;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",pt);
		pt++;
	}
	for(pt=A+n-1;pt>=A;pt--)
	{
		if(t==0)
		{
			printf("%d",*pt);
			t++;
		}
		else
		{
		   printf(" %d",*pt);
		}
	}
	return 0;
}