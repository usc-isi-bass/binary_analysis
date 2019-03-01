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
    scanf("%d\n",&n);
    int zx[n];
    int dx[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&zx[i]);
    }
    for(int j=1;j<=n;j++){
        dx[j]=zx[n-j+1];
    }
    for(int j=1;j<n;j++){
        printf("%d ",dx[j]);
    }
    printf("%d",dx[n]);
    return 0;
}
