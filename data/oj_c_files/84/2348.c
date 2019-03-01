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
 int a,b,c,n,i,x;
 scanf("%d",&i);
 scanf("%d",&x);
 a=x;
 scanf("%d",&x);
 b=x;
 if(a<b){
        c=b;
        b=a;
        a=c;
        }
for(n=1;n<=(i-2);n++){
	scanf("%d",&x);
       if(x>=a){
       b=a;
       a=x;
       }else{
          if(x>b){
          b=x;
          }
       }
     }
 printf("%d\n",a);
 printf("%d",b);
 return 0 ;
}
