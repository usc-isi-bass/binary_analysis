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
    int n;
    scanf("%d",&n);
    int *SZ=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&SZ[i]);
        }
    for(int j=0;j<n;j++){
        if(j==0){
           printf("%d",SZ[j]);
           }   
        for(int k=0;k<j;k++){
            if(SZ[j]==SZ[k]){
               break;
               }else if(k==j-1){
                printf(" %d",SZ[j]);
               }
            }
        }
    return 0;
}