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
    int a,b,c,d,e;
    int x[60000],y[60000];
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        scanf("%d %d",&(x[b]),&(y[b]));
    }
    for(e=1;e<a;e++){
      for(b=1;b<=a-e;b++){
        if(x[b]>x[b+1]){
            c=x[b];
            d=y[b];
            x[b]=x[b+1];
            y[b]=y[b+1];
            x[b+1]=c;
            y[b+1]=d;
           }
        }
    }
    for(b=1;b<a;b++){
      if(y[b]<x[b+1]){
       printf("no");
       break;
        }
    else if(b==a-1){
          if(y[b]>y[b+1]){
          d=y[b];
         y[b]=y[b+1];
         y[b+1]=d;
      }
      printf("%d %d",x[1],y[a]);}
       else if(y[b]>y[b+1]){
          d=y[b];
         y[b]=y[b+1];
         y[b+1]=d;
      }
}
    return 0;
}
   
