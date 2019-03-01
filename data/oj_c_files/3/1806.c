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
    int n,k,sum=0;
    scanf("%d %d",&n,&k);
    int sz[1000];
    for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(int j=0;j<n;j++){
        for(int h=0;h<n;h++){
            if(sz[j]+sz[h]==k){
                sum++;
            }
        }
    }
    if(sum==0){
        printf("no");
    }else{
        printf("yes");
    }
    return 0;
}
