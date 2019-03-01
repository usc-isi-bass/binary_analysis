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
	int n,k,i,m,sum;
	scanf("%d%d",&n,&k);

	m=n-1;
	for(i=1;;)
	{
		sum=i;
		while((n*sum+k)%(n-1)==0)
		{
			sum=(n*sum+k)/(n-1);
			m--;
			if(m==0)
				break;
		}
		if(m!=0)
		{
			i++;
			m=n-1;
		}
		else
			break;
	}
	printf("%d",n*sum+k);
}


