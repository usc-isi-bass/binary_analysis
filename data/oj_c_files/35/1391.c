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
 int a[8][8],i,k,row,col,max,x,min,l,y;
 scanf("%d,%d",&row,&col);
 for(i=0;i<row;i++){
   for(k=0;k<col;k++){
     scanf("%d",&a[i][k]);
                     }
                    }
 for(i=0;i<row;i++){
  max=a[i][0];
  for(k=0;k<col;k++){
     if(a[i][k]>=max){
       max=a[i][k];
       x=k;
                    }
                    }
  min=a[0][x];
 for(l=0;l<row;l++){
 if(a[l][x]<=min){
  min=a[l][x];
  y=l;
                  }
                   }
 if(min==max){
  printf("%d+%d",y,x);
  goto CATHERING;
              }
                      }
 printf("No");
CATHERING:
 return 0;
  }
 