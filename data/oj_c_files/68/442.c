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
	long int n,i,j,k,l,t,s,a,b;
	scanf("%ld",&n);printf("\n");
	for(i=6;i<=n;i=i+2)
	{
		
		for(k=3;k<=i;k=k+2)
		{
			for(j=3;j<=sqrt(k);j++)
			{
				if(k%j==0)break;
			}
			if(j>sqrt(k))
			{b=i-k;
			for(l=2;l<=sqrt(b);l++)
			{
				
				if(b%l==0)break;
			}
			if(l>sqrt(b))
			{printf("%ld=%ld+%ld\n",i,k,b);break;}}
		}
	}
}
