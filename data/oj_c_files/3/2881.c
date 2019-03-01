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
    int n,k;
    scanf("%d%d",&n,&k);
    int sz[n];
    for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int s=i+1;s<n;s++){
            if(sz[i]+sz[s]==k){
                printf("yes");return 0;
            }
            if(sz[i]+sz[s]!=k&&i==n-2){
                printf("no");return 0;
            }
        }
    }
}

