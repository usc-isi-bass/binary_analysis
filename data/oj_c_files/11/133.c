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

  int year,month,day;
  int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   scanf("%d %d %d",&year,&month,&day);

  if (year%4!=0)
	  days[1]=28;
  else if (year%4==0&&year%100!=0)
	  days [1]=29;
  else if (year%400==0)
      days [1]=29;
  else if (year%100==0&&year%400!=0)
      days [1]=28;
  int i,k=0,n;
  for (i=1;i<month;i++)
  { 
	  k=k+days[i];
  }
     n=k+day+1;
	 printf ("%d\n",n);
	 return 0;
}