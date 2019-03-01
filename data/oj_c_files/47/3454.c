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
    int n,a,b;
    int sz[2][101];
    scanf("%d",&n);
    for(a=0;a<n;a++){
        scanf("%d",&sz[0][a]);
    }
    for(a=0;a<n;a++){
        sz[1][a]=sz[0][n-1-a];
        }
    for(b=0;b<n-1;b++){
        printf("%d ",sz[1][b]);
    }
    printf("%d",sz[1][n-1]);
    return 0;
    
    
}