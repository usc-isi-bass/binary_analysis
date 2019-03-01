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

int main (){
     int a[10000];
     int i,n,m,j;
     scanf("%d",&n);
     for(i=0;i<n;i++){
         scanf("%d",&(a[i]));
     }
     for(i=0;i<n;i++){
         for(j=0;j<n;j++){
             if(a[i]<a[j]){
                 m=a[i];
                 a[i]=a[j];
                 a[j]=m;
             }
         }
     }
 for(i=0;i<n;i++){
   if(a[i]%2==0){
       a[i]=0;
   }
 } 
 if(a[0]!=0){
     printf("%d",a[0]);
 }
 for(i=1;i<n;i++){
     if(a[i]!=0){
         printf(",%d",a[i]);
     }
 }
     return 0;
 }

