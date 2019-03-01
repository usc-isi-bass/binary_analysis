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
 while (x%2==0)
 {
     x=x/2;
     printf("%d/2=%d\n",x*2,x);
     while (x%2!=0 && x!=1)
     {
         x=x*3+1;
         printf("%d*3+1=%d\n",(x-1)/3,x); 
         }
     } 
 
 while (x%2!=0 && x!=1)
 {
       x=x*3+1;
       printf("%d*3+1=%d\n",(x-1)/3,x);
       while (x%2==0)
       {
             x=x/2;
             printf("%d/2=%d\n",x*2,x); 
             } 
       }
 if (x==1) printf("End\n"); 
 
}
