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
    int n,i,s=0,a[200],b[200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
            s=s+1;
        }
        else if(a[i]==b[i]){
            s=s+0;
        }
        else{
            s=s-1;
        }
    }
    if(s>0){
        printf("A");
    }
    else if(s==0){
        printf("Tie");
    }
    else if(s<0){
        printf("B");
    }
    return 0;
}

