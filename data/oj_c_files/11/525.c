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

main(){
  int year,month,date,i=1,sum=0;
  scanf("%d%d%d",&year,&month,&date);
  
  
  for(i=1;i<=month-1;i++)
  {    
	  if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		sum+=31;
     
	  else if(i==2)
	 {
		 if (year%4==0&&year%100!=0||year%400==0)
		 {
			 sum+=29;
		 }
		 else 
			 sum+=28;
	 }
	 else {
		 sum+=30;
	 }
	  
  }

   sum+=date;
	  printf("%d",sum);
	 
  return 0;
}
