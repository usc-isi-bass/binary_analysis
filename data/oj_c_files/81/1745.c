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
   int sz[5][5];
   int e,m,n,i,k;
   int h;
      for(i=0;i<5;i++){
      for(k=0;k<5;k++){
      scanf("%d",&sz[i][k]);
      }
   }
   scanf("%d%d",&n,&m);
     if((m<5)&&(n<5)){
      h=0;
      for(i=0;i<5;i++){
      e=sz[m][i];
      sz[m][i]=sz[n][i];
      sz[n][i]=e;
      }
   }else{
      h=1; 
   }
   if(h==1){
   printf("error");
   }else {
        for(i=0;i<5;i++){
            for(k=0;k<4;k++){
            printf("%d ",sz[i][k]);
            }
           printf("%d\n",sz[i][4]);
        }
   }
   return 0;
}