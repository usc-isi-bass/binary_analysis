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

main()
{
	long a,i,q,p,k,j;
	scanf("%ld",&a);
	for(i=6;i<=a;i+=2)
	{
		p=3;
		test:j=3;
		while(p*2<=i&&j*j<=p)
		{
			if(p%j==0)
			{
				p+=2;
				j=3;
			}
			else j+=2;
		}
		q=i-p;
		k=3;
		while(k*k<=q)
		{	
			if(q%k==0)
			{
				p+=2;
				goto test;
			}
			else 
				k+=2;
		}
		printf("%ld=%ld+%ld\n",i,p,q);
	}
}

