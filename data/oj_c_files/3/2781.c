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
    int n,k,j;
    int sz[1001];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&(sz[i]));
    }
    int l=0;
    while(l<n-1){j=l+1;
    while(j<n){
    if(sz[l]+sz[j]==k){printf("yes");
    return 0;
    }j++;
    }
    l++;
    }
    printf("no");
    return 0;
}
