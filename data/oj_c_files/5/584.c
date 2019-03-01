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
   int i,j,a,b,c=0;
   double n;
   scanf("%lf",&n);
   char A[500],B[500];

       scanf("%s %s",A,B);
   a=strlen(A);
   b=strlen(B);
   if(a!=b)
   {
       printf("error");
   return 0;
   }
   for(j=0;j<a;j++)
   {

      if(A[j]==B[j])
      {
         c++ ;
      }
      if(A[j]!='A'&&A[j]!='G'&&A[j]!='C'&&A[j]!='T')
      {
          printf("error");
           return 0;
      }
      if(B[j]!='A'&&B[j]!='G'&&B[j]!='C'&&B[j]!='T')
      {
          printf("error");
           return 0;
      }

   }
   if((1.0*c/a)>=n)
   {
       printf("yes");
   }else{
       printf("no");
   }


    return 0;
}



