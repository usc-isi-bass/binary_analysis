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

int main (){
    int n;
    scanf("%d",&n);
    int a,b,c,d,e,f;
     a=b=c=d=e=f=0;
    while(n>=100){
         a++;
         n-=100;
         }
   while(n<100&&n>=50){
         b++;
         n-=50;
        }
   while(n<50&&n>=20){
         c++;
         n-=20;
        }
   while(n<20&&n>=10){
       d++;
       n-=10;
      }
   while(n<10&&n>=5){
       e++;
       n-=5;
       }
  while(n>0&&n<5){
       f=n;
       break;
      }
  printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
return 0;
}