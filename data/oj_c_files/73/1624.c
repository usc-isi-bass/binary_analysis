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
    int i,j,m,n,k;
    int a[5][5];
    for(i=0;i<5;i++){
       for(j=0;j<5;j++){ 
          scanf("%d",&a[i][j]);
      }
    }
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      for(k=0;k<5;k++){
       if(a[i][k]>a[i][j]){
        break;
       }
      }
     if(k<5){
      continue;
     }
   for(k=0;k<5;k++){
     if(a[k][j]<a[i][j]){
       break;
     }
    }
   if(k<5){
    continue;
   }
   printf("%d %d %d\n",i+1,j+1,a[i][j]);
   return 0;
   }
  }
   printf("not found");
   return 0;
}