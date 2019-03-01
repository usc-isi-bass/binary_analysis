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

void main()
{
 int i;
 int sum_day(int,int);
 int leap(int year);
 int year[5],month[5],day[5],days[5];
 for(i=0;i<5;i++)
 scanf("%d%d%d",&year[i],&month[i],&day[i]);
 for(i=0;i<5;i++)
 {days[i]=sum_day(month[i],day[i]);
 if(leap(year[i])&&month[i]>=3)
  days[i]=days[i]+1;
 printf("%d\n",days[i]);}
}
   int sum_day(int month,int day)
   {int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    for(i=1;i<month;i++)
      day+=day_tab[i];
    return(day);
   }

  int leap(int year)
   {int leap;
    leap=year%4==0&&year%100!=0||year%400==0;
    return(leap);
   }
