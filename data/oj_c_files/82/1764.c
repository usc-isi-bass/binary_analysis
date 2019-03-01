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

int main()
{
	int a,b,T,i,j=0,k,K=0;
	scanf("%d",&T);
	
    for(i=0;i<T;i++)
    {
       scanf("%d%d",&a,&b);
	   if(b<=90&&b>=60&&a>=90&&a<=140)
	   { 
		   j=j+1;
		   k=j;
          if (K<k)
		  { K=k;
		   }
	   }
	   else 
	   {
		   
	      k=0;
		  j=0;
	   }
	}
	printf("%d",K);
}