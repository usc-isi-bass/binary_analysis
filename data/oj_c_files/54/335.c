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
	double a=0,x;
	int n,k,i;
	long int m=4;
	scanf("%d%d",&n,&k);
	if(n>7)
		m=15000000;
	while((a<1)||(a!=(int)a))
	{	
		m++;
		x=0;
		for(i=1;i<=n;i++)
		{
			a=(m-i*k-x)/n;
			x=x+a;
		}
	}	 
	printf("%ld",m);	
}
