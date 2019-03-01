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
      int year,mon,day,f,i,sum=0;
      int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
      scanf("%d %d %d",&year,&mon,&day);
      if(year%4==0&&year%100!=0)
      f=1;
      else if(year%400==0)
      f=1;
      else
      f=0;
      for(i=1;i<mon;i++)
      {
                           sum=sum+a[i-1];                     
      }
      sum=sum+day;
      if(f==1&&mon>2)
      sum=sum+1;
      printf("%d",sum);
      getchar();
      getchar();
}
