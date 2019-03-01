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
    int a,b,n,i,k=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a==0&&b==1){k++;}
        else if(a==1&&b==2){k++;}
        else if(a==2&&b==0){k++;}
        else if(a==b){p++;}
    }
    if(k>1.0*(n-p)/2){printf("A");}
    else if(k<1.0*(n-p)/2){printf("B");}
    else{printf("Tie");}
    return 0;
}
