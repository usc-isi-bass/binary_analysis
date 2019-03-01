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
	int a,b,n,k,i,j,m,p;
	long c;
	scanf("%d%d",&n,&k);
	for(c=0;c<100000000000000;c++)
	{
		m=c;
		p=0;
		for(i=0;i<n;i++)
		{
			if((m-k)%n==0&&(m-k!=0))
			{
				m=(m-k)/n*(n-1);
				p=p+1;
			}
		}
		if(p==n)
		{
			printf("%ld\n",c);
			break;
		}
	}
}