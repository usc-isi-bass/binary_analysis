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
    int n,a,b,i,A=0,B=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){                
                     scanf("%d %d",&a,&b);
                     if(a==0){
                              if(b==0){
                                       continue;
                                       }
                              else if(b==1){
                                   A++;
                                   }
                              else{
                                   B++;
                                   }
                              }
                     else if(a==1){
                              if(b==0){
                                       B++;
                                       }
                              else if(b==1){
                                   continue;
                                   }
                              else{
                                   A++;
                                   }
                              }
                     else{
                              if(b==0){
                                       A++;
                                       }
                              else if(b==1){
                                   B++;
                                   }
                              else{
                                   continue;
                                   }
                              }
                     }
    if(A>B){
            printf("A");
            }
    else if(A<B){
                 printf("B");
                 }
    else{
         printf("Tie");
         }
         return 0;
         }
