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
    int day_of_month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int w;
    int i , days=13 ;
    scanf("%d" , &w);
    if(w==5)
      {
         for(i=1 ; i<13 ; i++)
            {
               days=day_of_month[i-1]+days;
               if( (days-1)%7==0 ) printf("%d\n" , i);
             }
       }
    if(w==1)
      {
         for(i=1 ; i<13 ; i++)
            {
               days=day_of_month[i-1]+days;
               if( (days-5)%7==0 ) printf("%d\n" , i);
             }
       }

    if(w==2)
      {
         for(i=1 ; i<13 ; i++)
            {
               days=day_of_month[i-1]+days;
               if( (days-4)%7==0 ) printf("%d\n" , i);
             }
       }
     if(w==3)
      {
         for(i=1 ; i<13 ; i++)
            {
               days=day_of_month[i-1]+days;
               if( (days-3)%7==0 ) printf("%d\n" , i);
             }
       }
    if(w==4)
      {
         for(i=1 ; i<13 ; i++)
            {
               days=day_of_month[i-1]+days;
               if( (days-2)%7==0 ) printf("%d\n" , i);
             }
       }
     if(w==6)
      {
         for(i=1 ; i<13 ; i++)
            {
               days=day_of_month[i-1]+days;
               if( (days-7)%7==0 ) printf("%d\n" , i);
             }
       }
     if(w==7)
      {
         for(i=1 ; i<13 ; i++)
            {
               days=day_of_month[i-1]+days;
               if( (days-6)%7==0 ) printf("%d\n" , i);
             }
       }
     return 0;
}
   
