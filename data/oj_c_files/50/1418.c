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
   int w,n;
   scanf("%d",&w);
   int i=1,x=0;
   while(i<=12){
     if(i==1){
       n=(12%7+w)%7;
     }else if(i==2||i==4||i==6||i==8||i==9||i==11){
       x=x+31;
       n=((12+x)%7+w)%7;
     }else if(i==3){
       x=x+28;
       n=((12+x)%7+w)%7;
     }else{
       x=x+30;
       n=((12+x)%7+w)%7;
     }
     if(n==5){
       printf("%d\n",i);
     }
     i++;
   }
   return 0;
}
