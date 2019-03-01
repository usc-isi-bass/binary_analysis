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

 int *data;
 int InitData();
 void Sort(int a[],int n)
 {
     int i,j,k,t;
     for(i=0;i<n;i++){
         k=i;
         for(j=i+1;j<n;j++){
             if(a[j]<a[k]){
                 k=j;
             }
         }
         if(k!=i){
             t=a[k];
             a[k]=a[i];
             a[i]=t;
         }
     }
 }
 void PrintData(int a[],int n){
     int i;
     for(i=0;i<n;i++){
         if(a[i]%2==1&&i>0)
         printf(",%d",a[i]);
     }
 }
 
 int main (){
     int a[10000];
     int i,n;
     scanf("%d",&n);
     for(i=0;i<n;i++){
         scanf("%d",&(a[i]));
     }
     Sort(a,n);
     printf("%d",a[0]);
     PrintData(a,n);
     return 0;
 }
