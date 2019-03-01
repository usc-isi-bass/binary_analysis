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
    int N,i,a=0,e,k;
    scanf("%d",&N);
    int sz[N],m[N];
    for(i=0;i<N;i++){
        scanf("%d",&(sz[i]));
        }
        for(i=0;i<N;i++){
            m[i]=0;
        }
        for(i=0;i<N;i++){
            if((sz[i])%2==1){
                a++;
                m[i]=sz[i];
                }else{
                    continue;
                }
        }
           for(k=1;k<N;k++){
           for(i=0;i<N-k;i++){
               if(m[i]>m[i+1]){
                   e=m[i+1];
                   m[i+1]=m[i];
                   m[i]=e;
               }
           }
           }     
            for(i=N-a;i<N-1;i++){
            printf("%d,",m[i]);
            
            }    
            printf("%d",m[N-1]);
            return 0;    
                
            }
        
    
    


