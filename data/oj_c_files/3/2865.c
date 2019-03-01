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
    int n,k,i,a,b,c;
    int sz[1000];
    c=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&(sz[i]));
    } 
    for(int a=0;a<n;a++){
        for(i=0;i<n;i++){
            b=sz[a]+sz[i];
              if(sz[a]+sz[i]==k){
            c++;
              }
              else{continue;}
           }
        }
    if(c==0){
        printf("no");
      }
       if(c>0){
        printf("yes");
      }
    return 0;
}

