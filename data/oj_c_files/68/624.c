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

int F(long int m)
{
	long int i;
	if(m%2==0)
		return 0;
	for(i=3;i<=sqrt(m);i+=2)
	{
		if(m%i==0)
			return 0;
	}
	return 1;
}
void main()
{
	long int i,j,n;
	scanf("%ld",&n);
	for(i=6;i<=n;i+=2)
	{
		for(j=3;j<=(i/2);j+=2)
		
			if(F(j)==1&&F(i-j)==1)
		{
				printf("%ld=%ld+%ld\n",i,j,i-j);
			break;
		}
	}
}