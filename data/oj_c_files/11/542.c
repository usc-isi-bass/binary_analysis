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

int main(int argc, char* argv[])
{ 
   int year,month,date;
   int a=0;
   scanf("%d %d %d",&year,&month,&date);
   if(((year%4==0)&&(year%100!=0))||year%400==0){
      switch (month){
          case 1:a=date;break;
          case 2:a=31+date;break;
          case 3:a=31+29+date;break;
          case 4:a=31+29+31+date;break;
          case 5:a=31+29+31+30+date;break;
          case 6:a=31+29+31+30+31+date;break;
          case 7:a=31+29+31+30+31+30+date;break;
          case 8:a=31+29+31+30+31+30+31+date;break;
          case 9:a=31+29+31+30+31+30+31+31+date;break;
          case 10:a=31+29+31+30+31+30+31+31+30+date;break;
          case 11:a=31+29+31+30+31+30+31+31+30+31+date;break;
          case 12:a=31+29+31+30+31+30+31+31+30+31+30+date;break;
      }
   }
   else{
     switch(month){
          case 1:a=date;break;
          case 2:a=31+date;break;
          case 3:a=31+28+date;break;
          case 4:a=31+28+31+date;break;
          case 5:a=31+28+31+30+date;break;
          case 6:a=31+28+31+30+31+date;break;
          case 7:a=31+28+31+30+31+30+date;break;
          case 8:a=31+28+30+31+30+31+date;break;
          case 9:a=31+28+31+30+31+30+31+31+date;break;
          case 10:a=31+28+31+30+31+30+31+31+30+date;break;
          case 11:a=31+28+31+30+31+30+31+31+30+31+date;break;
          case 12:a=31+28+31+30+31+30+31+31+30+31+30+date;break;
      }
   }
   printf("%d\n",a);
   return 0;
}  