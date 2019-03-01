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
	int su(int m);
	int n,i;

	scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{
		if(su(i)&&su(n-i))
		{
			printf("%d %d\n",i,n-i);
		}
	}
}

int su(int m)
{
	int j;
	for(j=2;j<=sqrt(m);j++)
		if(m%j==0)break;

	if(j>sqrt(m))
		return 1;
	else
		return 0;
}


              



