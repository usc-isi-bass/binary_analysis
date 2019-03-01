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
   char z[300];
   int sum,i,num=0;
 
   char n;
   gets(z);
   for(n='a';n<='z';n++)
   {
	   sum=0;
	   for(i=0;i<strlen(z);i++)
	   {
		   if(z[i]==n)
		   {
			   sum++;
		   }
		  
		   num+=sum;
	   }
       if(sum!=0)
		   {
			   printf("%c=%d\n",n,sum);
		   }
   }
   if(num==0)
   {
	   printf("No");
   }

	   

   return 0;
 
 
}