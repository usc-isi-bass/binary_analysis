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
 unsigned long  year,month,day,i,n,a,b,total,c;
 unsigned long  s[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 scanf("%d %d %d",&year,&month,&day);
 n=(year-1)/4-(year-1)/100+(year-1)/400;
 if((year%4==0&&year%100!=0)||year%400==0)
  s[2]=29;
    b=0;
 for(a=1;a<month;a++)
  b=b+s[a];
 total=year-1+n+b+day;
 c=total%7;
switch (c)
 {
 case 0:
  printf("Sun.");
  break;
 case 1:
  printf("Mon.");
  break;
 case 2:
  printf("Tue.");
  break;
 case 3:
  printf("Wed.");
  break;
 case 4:
  printf("Thu.");
  break;
 case 5:
  printf("Fri.");
  break;
 case 6:
  printf("Sat.");
  break;
 }
return 0;
}