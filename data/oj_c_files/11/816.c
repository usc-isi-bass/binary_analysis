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

main()
{
      int year,month,day,D=0,i;
      scanf("%d %d %d",&year,&month,&day);
      if(year%400==0||(year%100!=0&&year%4==0))
      {
               int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
               for(i=0;i<month-1;i++)
               D=D+a[i];
               D=D+day;
      }
      else
      {
               int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
               for(i=0;i<month-1;i++)
               D=D+a[i];
               D=D+day;
      }
      printf("%d",D);
      getchar();
      getchar();
      return 0;
}