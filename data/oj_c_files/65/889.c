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
    int n,a[200],b[200],i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
        if(a[i]!=2&&b[i]-a[i]==1){
            k++;
        }else if(a[i]==2&&b[i]==0){
            k++;
        }else if(b[i]!=2&&a[i]-b[i]==1){
            k--;
        }else if(b[i]==2&&a[i]==0){
            k--;
        }else if(a[i]==b[i]){
            k=k;
        }
    }
    if(k==0){
        printf("Tie");
    }else if(k<0){
        printf("B");
    }else{
        printf("A");
    }
    return 0;
}
