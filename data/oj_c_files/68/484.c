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
	long i,n,k,t,s;
	scanf("%ld",&n);
	for(i=6;i<=n;i+=2)
	{
		for(k=2;k<=i/2;)
		{
			loop: for(t=2;t<=sqrt(k);t++) {if(k%t==0) {k++;t=2;}}
			s=i-k;
			for(t=2;t<=sqrt(s);t++) {if(s%t==0) {k++;goto loop;}}
			printf("%ld=%ld+%ld\n",i,k,s);break;
		}
	}
}
									