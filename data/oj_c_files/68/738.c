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
	long int n,a,b,k,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(a=3,b=i-3;a<=b;a=a+2,b=b-2)
		{
			for(j=3;j<a/2;j=j+2)if(a%j==0)break;
			for(k=3;k<b/2;k=k+2)if(b%k==0)break;
			if(j>=a/2&&k>=b/2)break;
		}
		if(a<=b)printf("%ld=%ld+%ld\n",i,a,b);
	}
}