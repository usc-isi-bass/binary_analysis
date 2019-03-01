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
    int n,k,z[1000],i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&z[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(z[i]+z[j]==k){
                if(i!=j){
                    printf("yes");
                    return 0;
                }else{continue;}
            }
        }
    }
    printf("no");
    return 0;
}
