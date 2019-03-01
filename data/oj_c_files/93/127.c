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


void function(int,int);

int main()
{
   int n;
   int i;
   int k=0;

   scanf("%d",&n);
   for(i=0;i<3;i++)
   {
      if(n%(2*i+3)==0)
      {
         k++;
      }
   }
   for(i=0;i<3;i++)
   {
      if(n%(2*i+3)==0)
      {
         printf("%d",(2*i+3));
         if(k>1)
         {
            printf(" ");
            k--;
         }
      }

   }
   if(k==0)
   {
      printf("n");
   }
   return 0;

}