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
     int n,t=0,e;
     scanf("%d",&n);
     int s[n];
     for(int i=1;i<=n;i++){
         scanf("%d",&s[i]);
         if(s[i]%2==0){
             s[i]=0;
             t+=1;
         }
     }
     t=n-t;
     for(int m=n-1;m>=1;m--){
         for (int r=1;r<=m;r++){
             if(s[r]>s[r+1]){
                 e=s[r];
                 s[r]=s[r+1];
                 s[r+1]=e;
             }
         }
     }
     for(int i=n-t+1;i<n;i++){
         printf("%d,",s[i]);
     }
     printf("%d",s[n]);
     return 0;
 }
   