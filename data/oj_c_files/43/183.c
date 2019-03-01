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

int prime(int a){
    int k, x=(int)sqrt(a);
    for (k=2;k<=x;k++) {
        if (a%k==0) {
            break;
        } 
    }
    if(k>x){
        return 1;
    }
    else 
        return 0;
}

int main(){
    int m,i,a,b;
    scanf("%d\n",&m);
    for(i=3;i<=m/2;i++){
        a=i;
        b=m-i;
        if ((prime(a)==1)&&(prime(b)==1))
                printf("%d %d\n",a,b);
        }
        
    
    return 0;
}