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
	int m,n,x;
	scanf("%d%d",&m,&n);
	x=n;
	while(m>=1)
	{
		n=x;
		while(n>=1)
		{
		  if(m==n)
		  {
			printf("%d\n",m);
			break;
		  }
		  n=n/2;
		}
		if(m==n) break;
		m=m/2;
	}
}
