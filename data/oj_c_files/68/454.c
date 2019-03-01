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
	long n,a,b,i,k,m;
	scanf("%ld",&n);
	for(i=6;i<=n;i=i+2)
	{
		  for(a=3;a<=(long)(i/2);a++)
			
		  {
			  b=i-a; 
			  for(k=2;k<=sqrt(a);k++)
			  {
				if(a%k==0)break;
			  } 
			  for(m=2;m<=sqrt(b);m++)
			  {
				if(b%m==0)break;
			  }	
			  if(k>sqrt(a)&&m>sqrt(b))
			  {
				printf("%ld=%ld+%ld\n",i,a,b);
				break;
			  }
		  }
	      
		  
	}
}
