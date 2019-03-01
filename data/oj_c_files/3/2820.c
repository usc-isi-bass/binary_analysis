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
    int n;
    int k;
    scanf("%d ",&n);
    scanf("%d",&k);
    int sz[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&sz[i]);
    }
    int x=0;
    for(int i=0;i<n;i++){
        for(int m=0;m<n;m++){
            if(sz[m]+sz[i]==k){
              x++;  
            }
            else{
                continue;
            }
        }
    }
    if (x>0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
