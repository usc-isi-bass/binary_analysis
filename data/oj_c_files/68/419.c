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
	long a,i,q,p,j,t;
	scanf("%ld",&a);
	for(i=6;i<=a;i+=2)
		for(p=3;p<=i/2;p+=2)
		{
			t=0;
			for(j=3;j*j<=p;j+=2)
				if(p%j==0)
				{
					t=1;
					break;
				}
			if(t)
				continue;
			q=i-p;
			for(j=3;j*j<=q;j+=2)
				if(q%j==0)
				{
					t=1;
					break;
				}
			if(!t)
			{
				printf("%ld=%ld+%ld\n",i,p,q);
				break;
			}
		}
}

