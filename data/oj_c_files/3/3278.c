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
    int n,k,i,j,a=0,b=0,l[1001],m[1000000];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&(l[i]));        
    }
    for(i=0;i<n-1;i++){
        for(j=1;j<=n-1-i;j++){
            a=l[i]+l[i+j];
            b++;
            m[b]=a;
        }
    }
    for(i=1;i<=b;i++){
        if(m[i]==k){
            printf("yes");
            break;
        }else if(i==b){
            printf("no");
        }
    }
    return 0;
}


