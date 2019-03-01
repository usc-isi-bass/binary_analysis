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
	int m=1,n,k,s,t=1;
	scanf("%d %d",&n,&k);
	if(n==2)
		s=4+3*k;
	else
	{do
	{
	  t=n*t;
	  m++;
	}while(m<=n);
	s=t-k*(n-1);
	}
	printf("%d\n",s);
}
