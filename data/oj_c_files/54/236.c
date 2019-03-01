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
	int n,k,m,i,j;
	scanf("%d %d",&n,&k);
	for(i=1;i<10000000;i++)
	{
		m=n*i+k;
		j=1;
		while(j<n)
		{
			if(m%(n-1)==0)
			{
				m=(m*n)/(n-1)+k;
				j=j+1;
			}
			else break;
		}
		if(j==n) break;
	}
	printf("%d\n",m);
}