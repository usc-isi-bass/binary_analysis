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
	int i,k,e,n,t,j;
    scanf("%d%d",&n,&k);
	for (j=1,e=0;e==0;j++)
	for (i=0,t=j;i<n;i++)
	{
		e=t*n+k;
		if (e%(n-1)==0||i==n-1)
	        t=e/(n-1);
		else
		{
			e=0;
			break;
		}
	}
	printf ("%d\n",e);
	return 0;
}