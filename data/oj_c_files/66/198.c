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


int main(){
      int year, month, day, i,count=0,x=0,y;
      int mday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
      scanf("%d%d%d", &year, &month, &day);
      x=year%7+year/4-year/100+year/400;

	  for(i=1;i<month;i++)
		  x=x+mday[i-1];
	  x=x+day-1;

	  if(((year%4==0&&year%100!=0) || year%400==0 )&&(month<=2))
		  x=x-1;
	  y=x%7;
	  switch(y){
	  case 1:printf("Mon.\n");break;
		  case 2:printf("Tue.\n");break;
			  case 3:printf("Wed.\n");break;
				  case 4:printf("Thu.\n");break;
					  case 5:printf("Fri.\n");break;
						  case 6:printf("Sat.\n");break;
							  case 0:printf("Sun.\n");break;
	  
	  }
  
   return 0;
} 