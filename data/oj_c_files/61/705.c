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
   int n,m[20],a,j,i,b,c;
  
   scanf("%d",&n);
   for(i=1;i<n+1;i++)
   {
	   a=1;
       b=1;
	   scanf("%d",&(m[i]));
	   if(m[i]>2)
	   {
	       for(j=3;j<m[i]+1;j++)
		   {
              c=b;
			  b=a;
			  a=b+c;

		   } 
		   printf("%d\n",a);
	   }
	   else 
	   {
		   a=1;
		   printf("%d\n",a);

	   }

   }

  
   return 0;

}

