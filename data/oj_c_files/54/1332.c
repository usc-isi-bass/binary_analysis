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

int num(int n,int k)
{
	int i, j, sign=0, m;
	for(j=1; sign==0 ; j++)
	{
		sign=1;
		for(m=j, i=n; i>=1; i--)
		{
			if( (m*n)%(n-1) )
			{
				sign=0;
				break;
			}
			else
				m=k+m*n/(n-1);
		}
	}
	return m;
}
void main()
{
	int m, n, k;
	scanf("%d %d",&n,&k);
	m = num(n,k);
	printf("%d\n",m);
}