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
	int n,m,k,i,t,a;
	scanf("%d %d",&n,&k);
	t=n-1;
	a=1;
	i=1;
	m=a;
	while(i<=t)
	{
		if((n*m+k)%t==0) 
		{
			m=(n*m+k)/t;
			i=i+1;
		}
		else 
		{
			i=1;
			a=a+1;
			m=a;
		}
	}
	m=n*m+k;
	printf("%d\n",m);
}