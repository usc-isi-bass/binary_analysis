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
	long n,i,a,b,c,d;
	scanf("%ld",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(a=3;a<=i;a+=2)
		{
			b=3;
			for(;b<=sqrt(a);b+=2)
			if(a%b==0) break;
			if(b>sqrt(a))
			{
				c=i-a;
				d=3;
				for(;d<=sqrt(c);d+=2)
					if(c%d==0) break;
					if(d>sqrt(c)) {printf("%ld=%ld+%ld\n",i,a,c);break;}
			}
		}
	
	}
}