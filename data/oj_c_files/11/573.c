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
{int year,month,day,answer;
scanf("%d %d %d",&year,&month,&day);
 if(year%400==0||(year%4==0&&year%100!=0)){
  switch (month){
  case 1:answer=day;break;
  case 2:answer=31+day;break;
  case 3:answer=31+29+day;break;
  case 4:answer=31+29+31+day;break;
  case 5:answer=31+29+31+30+day;break;
  case 6:answer=31+29+31+30+31+day;break;
  case 7:answer=31+29+31+30+31+30+day;break;
  case 8:answer=31+29+31+30+31+30+31+day;break;
  case 10:answer=31+29+31+30+31+30+31+31+30+day;break;
  case 11:answer=31+29+31+30+31+30+31+31+30+31+day;break;
  case 12:answer=31+29+31+30+31+30+31+31+30+31+30+day;break;
  }
 printf("%d\n",answer);
 }
 else{switch (month){
  case 1:answer=day;break;
  case 2:answer=31+day;break;
  case 3:answer=31+28+day;break;
  case 4:answer=31+28+31+day;break;
  case 5:answer=31+28+31+30+day;break;
  case 6:answer=31+28+31+30+31+day;break;
  case 7:answer=31+28+31+30+31+30+day;break;
  case 8:answer=31+28+31+30+31+30+31+day;break;
  case 10:answer=31+28+31+30+31+30+31+31+30+day;break;
  case 11:answer=31+28+31+30+31+30+31+31+30+31+day;break;
  case 12:answer=31+28+31+30+31+30+31+31+30+31+30+day;break;
 }printf("%d\n",answer);
 }
	return 0;
}