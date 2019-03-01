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

void Exchange(int A[],int n);

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    Exchange(A,n);
    return 0;
}


void Exchange(int A[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("%d",A[n-1]);
    for(int j=n-2;j>=0;j--){
        printf(" %d",A[j]);
    }
}


