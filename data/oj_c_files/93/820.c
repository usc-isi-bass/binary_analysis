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
   int x;
   scanf("%d",&x);
       if(x%105==0)
       {
         printf("3 5 7",x);
	   }
       else if(x%15==0)
	   {
	     printf("3 5",x);
	   }
	   else if(x%21==0)
	   {
	     printf("3 7",x);
	   }
	   else if(x%35==0)
	   {
	     printf("5 7",x);
	   }
	   else if(x%3==0)
	   {
	     printf("3",x);
	   }
	   else if(x%5==0)
	   {
	     printf("5",x);
	   }
	   else if(x%7==0)
	   {
	     printf("7",x);
	   }
	   else
	   {
         printf("n",x);
	   }
	   return 0;
}