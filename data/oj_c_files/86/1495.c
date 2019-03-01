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
  int i,j,k,h,n,c,t,y,a[70],b[30];
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&h);
    for(j=0;j<h;j++){
      scanf("%d",&a[j]);
    }
    c=0;
    t=1;
    while(t<=60){
      c++;
      y=0;
      for(j=0;j<h;j++){
        if(c==a[j]){
          t+=4;
          y=1;
          break;
        }
      }
      if(y==0){
        t++;
      }
  
    }
    b[i]=c;
  }
  for(i=0;i<n;i++){
    printf("%d\n",b[i]);
  }
  
return 0;




}