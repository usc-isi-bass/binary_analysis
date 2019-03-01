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
 int N,i,t,j;
 int sum=0; 
 scanf("%d",&N);
 int a[N];
 for(i=0;i<N;i++){
   scanf("%d ",&a[i]);
 }
int b[sum];
   for(i=0;i<N;i++){
      if(a[i]%2!=0)
      {
       sum++; 
       b[sum-1]=a[i];
      }
   }
for(j=0;j<sum-1;j++) {
   for(i=0;i<sum-j-1;i++){
       if(b[i]>b[i+1]){
           t=b[i];
           b[i]=b[i+1];
           b[i+1]=t;
       }
    }
   }
   for(i=0;i<sum-1;i++){
   printf("%d,",b[i]);}
   printf("%d",b[sum-1]);
 return 0;
}