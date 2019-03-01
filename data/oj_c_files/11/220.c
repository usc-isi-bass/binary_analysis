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


  int   day_month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};   
  int   sum_day(int   month,int   day)   
  {   int   i;   
      for(i=0;i<month;i++)   
      day=day+day_month[i];   
      return(day);   
    }   
  int   leap(int   year)   
  {   int   leap;   
      leap=year%4==0   &&   year%100!=0   ||   year%400==0;   
      return(leap);   
    }   
  int main()   
  {   int   year,month,day,days,a;
  
      for(a=1;a<=5;a++)
      {scanf("%d%d%d",&year,&month,&day);   
        
        
      days=sum_day(month,day);   
      if(leap(year)   &&   month>=3)   
          days=days+1;   
      printf("%d\n",days);}   
      
  return 0;
  }
