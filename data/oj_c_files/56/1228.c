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


int main ()
{
  int n;
  scanf("%d",&n);
  if(n/10000!=0){
       n = n/10000+((n%10000)/1000)*10+((n%1000)/100)*100+((n%100)/10)*1000+(n%10)*10000;
       }
  if(n/10000==0 && n/1000!=0){ 
        n = n/1000+((n%1000)/100)*10+((n%100)/10)*100+(n%10)*1000;
       }
   if(n/10000==0 && n/1000==0 && n/100!=0){ 
        n = n/100+((n%100)/10)*10+(n%10)*100;
       }
   if(n/10000==0 && n/1000==0 && n/100==0 && n/10!=0){ 
        n = n/10+(n%10)*10;
       }
    printf("%d",n);                                                            
  return 0;
}
