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
   int n,i,j,k;
   k=0;
   scanf("%d",&n);
   int a[n],b[n];
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      }
   for(j=0;j<n-1;j++){
      if(a[j]!=100){
      for(i=j+1;i<n;i++){
          if(a[i]==a[j]){
            a[i]=100;
            }
            }
            }
            }
   printf("%d",a[0]);
   for(i=1;i<n;i++){
      if(a[i]!=100){
        printf(" %d",a[i]);
        }
        }
   scanf("%d",&n);
   return 0;
}
      
    
