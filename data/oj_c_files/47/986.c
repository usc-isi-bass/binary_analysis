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
    int sz[100];
    int n,e,m,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%d",&sz[i]);
            }
    m=n-1;
    k=0;
    while(k<m){
                e=sz[k];
                sz[k]=sz[m];
                sz[m]=e;
                k+=1;
                m-=1;
                }
    for(int i=0;i<n-1;i++){
            printf("%d ",sz[i]);
            }
    printf("%d",sz[n-1]);

        return 0; 
  } 
