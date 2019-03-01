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
    int n,i,b=0,a=0;
    scanf("%d",&n);
    int A[n],B[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&A[i],&B[i]);
    }
    for(i=0;i<n;i++){
        if((A[i]==0&&B[i]==1)||(A[i]==1&&B[i]==2)||(A[i]==2&&B[i]==0)){
            a++;
        }
    }
    for(i=0;i<n;i++){
        if((A[i]==0&&B[i]==2)||(A[i]==1&&B[i]==0)||(A[i]==2&&B[i]==1)){
            b++;
        }
    }
    if(a>b){
        printf("A");
    }else if(a==b){
        printf("Tie");
    }else if(a<b){
        printf("B");
    }
    return 0;
}
