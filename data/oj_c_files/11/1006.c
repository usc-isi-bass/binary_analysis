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
 int i,year,month,date,count=0,day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 cin>>year>>month>>date;
 for(i=1;i<month;i++)
  count+=day[i];
 count+=date;
 if(month>2)
  if((year%400==0)||((year%100!=0)&&(year%4==0)))
   count++;
 cout<<count;
 return 0;
}