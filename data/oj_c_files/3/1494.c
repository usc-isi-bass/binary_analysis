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
    int n,k,s,h=0,t=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d ",&a[i]);
     }
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
        s=a[i]+a[j];
        if(s==k){
         h=1;
       }
      }
    }
   if(h==1&&t==0){
    printf("yes");
   }else{
    printf("no");
   }
   return 0;
}