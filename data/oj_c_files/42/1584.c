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
    int n,k,i,j=0;
    scanf("%d",&n);
    int*a=(int*)malloc(sizeof(int)*n);
    int*b=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
                     scanf("%d",&a[i]);                 
    }
    scanf("%d",&k);
    for(i=0;i<n;i++){
                     if(a[i]!=k){
                                 b[j]=a[i];
                                 j++;            
                     }                 
    }
    for(i=0;i<j-1;i++){
                       printf("%d ",b[i]);                   
    }
    printf("%d",b[j-1]);
    free(b);
    free(a);
    return 0;
}