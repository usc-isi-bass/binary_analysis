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
   int a,b,n,c,d,e,f;
   d=0;
   e=0;
   scanf("%d",&n);
   for(a=0;a<n;a+=1){
       scanf("%d%d",&b,&c);
       if((b>=90)&&(b<=140)&&(c>=60)&&(c<=90)){
            d+=1;
            if(d>e){
               e=d;
                }}
       else{
               d=0;}
          }
   printf("%d\n",e);
   return 0;
}