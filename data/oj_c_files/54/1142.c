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
	int n,ti,k,i,j;
	scanf("%d %d",&n,&k);
	for(i=1;;i++)
	{
		ti=i;
		for(j=1;j<=n;j++)
		{
			ti=ti*n+k;
			if(j==n)goto qqq;
			else if(ti%(n-1)==0){ti=ti/(n-1);}
			else{goto sss;}
		}
	sss:;
	}
qqq:printf("%d\n",ti);
	return 0;
}