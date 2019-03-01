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
    int t;
    for(t=0;1;t++){
    int n,m,a[301],i,r,x,y=0;
    scanf("%d%d",&n,&m);
    if(n==0&&m==0){
                   break;
                   }
    x=n;
    for(i=0;i<n;i++){
                     a[i]=i;
                     }
    for(i=0;1;i++){
              if(a[i]==i){
                          y++;
                          }
              if(y==m){
                       a[i]=-1;
                       y=0;
                       x--;
                       }
              if(x==1){
                       for(r=0;r<n;r++){
                                        if(a[r]!=-1){
                                                    printf("%d\n",a[r]+1);
                                                    }
                                        } 
                       break;
                       }
              if(i==n-1){
                         i=-1;
                         }
              
              
              }
              }
    return 0;
}