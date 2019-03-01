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
    int n,i,k,t;
    int shuzu[500],shushu[500];
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&shuzu[i]);
                     if(shuzu[i]%2!=0){
                                       shushu[i]=shuzu[i];
                                       }
                     }
    for(k=1;k<=n;k++){                                
                     for(i=0;i<n-k;i++){	                            
                                        if(shushu[i]>shushu[i+1]){             
                                                                  t=shushu[i+1]; 
                                                                  shushu[i+1]=shushu[i];
                                                                  shushu[i]=t;
                                                                  }   
                                        }   
   }
   for(i=0;i<n;i++){
                    if((shushu[i]!=0)&&(i!=n-1)){
                                     printf("%d,",shushu[i]);
                                     }
                    if(i==n-1){
                               printf("%d",shushu[i]);
                               }
                    }
   return 0;
}