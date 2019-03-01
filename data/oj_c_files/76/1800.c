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
   int n,i;
   int  qs[100],zz[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d %d",&(qs[i]),&(zz[i]));
  }
   int e;
   for(int k=1;k<=n;k++){
    for(i=0;i<n-k;i++){
      if(qs[i]>qs[i+1]){
       e=qs[i+1];
       qs[i+1]=qs[i];
       qs[i]=e;
       }
     }
   } 
 for(int k=1;k<=n;k++){
    for( i=0;i<n-k;i++){
      if(zz[i]>zz[i+1]){
       e=zz[i+1];
       zz[i+1]=zz[i];
       zz[i]=e;
       }
     }
   } 

     for(double k=qs[0]+0.1;k<zz[n-1];k++){
        for( i=0;i<n;i++){
        if(k>=qs[i]&&k<=zz[i]){
            break;
            }
      }
        if(i==n){
           printf("no");
           return 0;
         }
    }
printf("%d %d",qs[0],zz[n-1]);
return 0;
}

