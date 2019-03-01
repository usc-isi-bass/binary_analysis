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
	long j,k,m,n,p,q,b;
	scanf("%ld %ld",&n,&k);
	m=0;
	while(1)
	{
		m++;
		j=n;
		b=m;
		q=1;
		while(j>0)
		{
			j--;
			if(b%(n-1)==0)
				b=b/(n-1)*n+k;
			else
			{
				q=0;
				break;
			}
		}
		if(q==1)
			break;
	}
	printf("%d",b);
}