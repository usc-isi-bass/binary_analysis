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
	long a,k,i;
    int f(long x);
	scanf("%ld",&a);
	for (i=6;i<=a;i=i+2) 
		for(k=3;k<=i/2;k=k+2)
		{
			if(f(k)==0&&f(i-k)==0) 
			{
				printf("%ld=%ld+%ld\n",i,k,i-k);
				break;
			}
		}
}
int f(long x)
{
	int j,sum;
	sum=0;
	for(j=3;j<=floor(sqrt(x));j=j+2)
		if (x%j==0) {sum=1;break;}
	return(sum);
}
	