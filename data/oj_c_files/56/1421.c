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
int a , b , c , e , f , g , h ;

scanf("%d" , &a) ;
b = a/10000 ;
c = a/1000 - 10 * b ;
e = a/100 - 100*b - 10*c ;
f = a/10 - 1000*b - 100*c - 10*e ;
g = a - 10000*b - 1000*c - 100*e - 10*f ;

if(b != 0 ){
   h = 10000*g + 1000*f + 100*e + 10*c + b ;
   printf("%d" , h) ;
           }

else { 
    if( c != 0){
       h = 1000*g + 100*f + 10*e + c ;
       printf("%d" , h) ;
               }
    else{
         if(e != 0){
         h = 100*g + 10*f + e ;
         printf("%d" , h) ;
                   }
         else{
               if(f != 0){
                 h = 10*g + f ;
                 printf("%d" , h) ;
                         }
               else
               printf("%d" , g) ;
               }
         }
      }
return 0 ; 
}