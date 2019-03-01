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
 int n,y,m=0,q;
 scanf("%d",&n);
 int i;
 for(i=1;i<=n;i++){
  if(i%7==0){
   continue;
   }else{
   q=i;
   while(q>0){
   y=(q%10);
   if(y==7){
    break;
    }
    if(q<10){
    m+=i*i;
    }
    q=q/10;
    
   }
  }
 }
 printf("%d",m);
 return 0;
}