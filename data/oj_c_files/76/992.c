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
    struct qujian{
       int a,b;   
           }Q[50000];
    int n,i,j,c,d;
    scanf("%d",&n);   
    for(i=0;i<n;i++){
       scanf("%d%d",&(Q[i].a),&(Q[i].b));              
                     }
    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
           if(Q[j-1].a>Q[j].a){
              Q[500]=Q[j-1];
              Q[j-1]=Q[j];
              Q[j]=Q[500];                          
                               }                
                           }             
                     } 

    for(i=0,c=Q[0].a,d=Q[0].b;i<n;i++){
        
         if(Q[i].a>d){printf("no");return 0;}
         else{
            if(Q[i].b>d){d=Q[i].b;}  
              }                     
                              }            
    printf("%d %d",c,d);    

return 0;
}

 
