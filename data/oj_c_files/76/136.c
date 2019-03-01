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
   int n,i,d,k,c,j,e,f;
   scanf("%d",&n);
   int a[n],b[n];
   f=1;
   for(i=0;i<n;i++){
       scanf("%d %d",&a[i],&b[i]);
       }
   for(i=0;i<n-1;i++){
       for(k=0;k<n-i-1;k++){
          if(a[k]>a[k+1]){
             c=a[k]; 
             d=b[k];
             a[k]=a[k+1];
             b[k]=b[k+1];
             a[k+1]=c;
             b[k+1]=d;
             }
          }
       }
    e=b[0];
    for(i=0;i<n-1;i++){
        if(e<a[i+1]){
           printf("no");
           f=2;
           break;
           }
        if(e>=a[i+1]&&e<b[i+1]){
           e=b[i+1];
           }
        }
    if(f==1){
    printf("%d %d",a[0],e);
}
    scanf("%d",&n);
    return 0;
}
