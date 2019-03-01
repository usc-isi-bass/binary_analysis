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
    int n,k,i,j,x;
    int a,b;
    int s=0;
    int sz[50001],szz[50001];
    scanf("%d",&n);
    for(i=0;i<n;i++){
                      scanf("%d%d",&sz[i],&szz[i]);
                      }
    for(k=1;k<=n;k++){
                      for(i=0;i<n-k;i++){
                                         if(sz[i]>sz[i+1]){
                                                           a=sz[i];
                                                           sz[i]=sz[i+1];
                                                           sz[i+1]=a;
                                                           b=szz[i];
                                                           szz[i]=szz[i+1];
                                                           szz[i+1]=b;
                                                           }
                                                           }
                                                           }
     for(i=0;i<n-1;i++){
                        if(sz[i+1]<=szz[i])
                           s+=1;
                        else {
                             for(j=0;j<i;j++){
                                              if(sz[i+1]<=szz[j])
                                                  s+=1;
                                                  }
                                                  }
                           }
    for(k=1;k<=n;k++){
                      for(i=0;i<n-k;i++){
                                         if(szz[i]>szz[i+1]){
                                                             x=szz[i];
                                                             szz[i]=szz[i+1];
                                                             szz[i+1]=x;
                                                             }
                                                             }
                                                             }
    if(s==n-1){
             printf("%d %d",sz[0],szz[n-1]);
             }
    else{
         printf("no");
         }
   
    
     return 0;
     }               
                                                           
