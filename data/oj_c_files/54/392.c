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
 long temp,p,i,sum,j,k,n;
 scanf("%ld%ld",&n,&k);
 sum=k;
 p=1;
 while (p==1) 
 {
	 sum=sum+n;
	 temp=sum;
	 i=0;
	 while (i<n)
	  {i++;  
	   if (temp%n==k&&temp>=n)
	   { temp=(temp-k)/n*(n-1);
	   if (i==n) p=0;}
	   else break;
	 }
 }
 printf("%ld",sum);
}
