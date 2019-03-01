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
{int year,month,day;
 scanf("%d %d %d",&year,&month,&day);
 int sum=0;
 if(year%4==0&&year%100!=0||year%400==0)
 {int mon[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  if(month==1)
	  sum=day;
  else if(month==2)
	  sum=31+day;
  else 
  {for(int i=0;i<=(month-2);i++)
  {sum+=mon[i];}
   sum=sum+day;
  }
  printf("%d",sum);
 } 
 else if(year%4!=0||year%100==0&&year%400!=0)
  {if(month==1)
   sum=day;
   else if(month==2)
	   sum=31+day;
   else
   {int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   for(int i=0;i<=(month-2);i++)
   {sum+=mon[i];}
    sum=sum+day;
   } printf("%d",sum);
  } 
 
	return 0;
}

