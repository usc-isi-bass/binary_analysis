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
  int year,month,day,leap,sum;
  scanf("%d %d %d",&year,&month,&day);
  if(year%4!=0) leap=0;
  if(year%4==0)
  {
	  if(year%100!=0)  leap=1;
	  if(year%100==0&&year%400==0)  leap=1;
	  else leap=0;
  }
  if(leap==1)
  {
	  switch(month)
	  {
	  case 1: sum=day;break;
      case 2: sum=31+day;break;
	  case 3: sum=31+29+day;break;
	  case 4: sum=31+29+31+day;break;
	  case 5: sum=31+29+31+30+day;break;
	  case 6: sum=31+29+31+30+31+day;break;
	  case 7: sum=31+29+31+30+31+30+day;break;
	  case 8: sum=31+29+31+30+31+30+31+day;break;
	  case 9: sum=31+29+31+30+31+30+31+31+day;break;
	  case 10: sum=31+29+31+30+31+30+31+31+30+day;break;
	  case 11: sum=31+29+31+30+31+30+31+31+30+31+day;break;
	  case 12: sum=31+29+31+30+31+30+31+31+30+31+30+day;break; 
	  }
  }
  if(leap==0)
  {	 
	  switch(month)
	  {
	  case 1: sum=day;break;
      case 2: sum=31+day;break;
	  case 3: sum=31+28+day;break;
	  case 4: sum=31+28+31+day;break;
	  case 5: sum=31+28+31+30+day;break;
	  case 6: sum=31+28+31+30+31+day;break;
	  case 7: sum=31+28+31+30+31+30+day;break;
	  case 8: sum=31+28+31+30+31+30+31+day;break;
	  case 9: sum=31+28+31+30+31+30+31+31+day;break;
	  case 10: sum=31+28+31+30+31+30+31+31+30+day;break;
	  case 11: sum=31+28+31+30+31+30+31+31+30+31+day;break;
	  case 12: sum=31+28+31+30+31+30+31+31+30+31+30+day;break; 
	  }
  }
  printf("%d",sum);
}





