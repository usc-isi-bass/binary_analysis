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
   int n,i,m,k,b,g;
   scanf("%d %d",&n,&k);
   int a[n];
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      }
      for(i=1;i<n;i++){
      for(m=0;m<i;m++){
      if(a[i]+a[m]==k){
           b=k;              
           printf("yes");
           return 0;
           }
         }
       if(i==n-1&&b!=k){
         printf("no");
         }
       }
       return 0;
} 
   
