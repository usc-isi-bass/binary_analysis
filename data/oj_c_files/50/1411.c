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
{int w,i,day,k,t;
scanf("%d",&w);

for(i=1;i<=12;i++){
 day=0;
 for(k=1;k<i;k++){
  if(k==1||k==3||k==5||k==7||k==8||k==10||k==12){
     day+=31;}
   else if(k==4||k==6||k==9||k==11){
     day+=30;}
   else if(k==2){day+=28;}
  }
  day+=13;
   t=w+(day-1)%7;
   if(t>7){t=t-7;}
   if(t==5){  
     printf("%d\n",i);}
}
return 0;
}