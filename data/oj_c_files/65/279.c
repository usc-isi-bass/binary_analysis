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
    int n;
    int sz[200][2];
    int i,j,a=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
         scanf("%d",&sz[i][j]);   
        }
   }
   for(i=0;i<n;i++){
       if(sz[i][0]==sz[i][1]){
           a++;
           b++;
       }
       if(sz[i][0]>=sz[i][1]){
          if(sz[i][0]==2&&sz[i][1]==0)
          a++;
          else
          b++;
       }
       if(sz[i][0]<=sz[i][1]){
          if(sz[i][0]==0&&sz[i][1]==2)
           b++;
           else
           a++;
       }
            
   }
   if(a>b){
       printf("A");
   }
   if(a==b){
       printf("Tie");
   }
   if(a<b){
       printf("B");
   }
   return 0;
}

