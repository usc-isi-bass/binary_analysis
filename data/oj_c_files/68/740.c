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
   int n,i,j,k,h;
   double a,b;
   scanf("%d",&n);
   for(i=6;i<=n;i=i+2)
   { 
	 for(j=3;j<i-2;j=j+2)
     { a=sqrt(j);
       for(k=3;k<=a;k=k+2)
       {  if(j%k==0)break;
	   }
	   if(k>a)
        h=i-j;
        b=sqrt(h);
        for(k=3;k<=b;k=k+2)
        { if(h%k==0)break;
		}
	   if(k>b)break;
	 }
     printf("%d=%d+%d\n",i,j,h);
   }   
}