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
    int n,i,k,f,g;
    scanf("%d",&n);
    int A[n],B[n];
    i=0,k=0;
    while(i<n){
        scanf("%d",&A[i]);
        if(A[i]%2!=0){
            B[k]=A[i];
            k++;
        }
        i++;
    }
    i=0;
    f=0;
    while(f<k){
        i=0;
        while(i<k-f-1){
            if(B[i]>B[i+1]){
                g=B[i+1];
                B[i+1]=B[i];
                B[i]=g;
            }
            i++;
        }
        f++;
    }
    i=0;
    while(i<k-1){
       printf("%d,",B[i]);
       i++;
    }
    printf("%d",B[k-1]);
    return 0;
}
