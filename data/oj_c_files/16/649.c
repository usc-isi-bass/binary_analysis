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
 int a,b,c,d,e,f,g,h;
 scanf("%d",&a);
 b=a%1000;
 c=(a-b)/1000;
 d=b%100;
 e=(b-d)/100;
 f=d%10;
 g=(d-f)/10;
 if(c==0)
  {
    if(e==0)
     {
       if(g==0)
        {
          if(f==0)
           printf("0");
          else
           printf("%d",f);
         }
       else
         {
         printf("%d%d",f,g);}
      }
     else
       {
        printf("%d%d%d",f,g,e);}
   }
 else                                       
 {
 printf("%d%d%d%d",f,g,e,c);}
}