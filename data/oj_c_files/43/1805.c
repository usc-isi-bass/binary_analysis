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
int m,a,b,i,k;
scanf("%d",&m);
for(a=3;a<=m/2;a=a+2)
   {
    b=m-a;
    i=2;
    k=2;
       while(i<=a-1) 
       { 
         if(a%i==0) 
         break;
         else
          
            i=i+1;
        }
        while(k<=b-1) 
       { 
         if(b%k==0) 
         break;
         else
          {if(k==b-1&&i==a)
           printf("%d %d\n",a,b);}
             k=k+1;
       }
 
   }
}