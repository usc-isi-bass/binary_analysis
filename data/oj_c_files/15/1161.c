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

int main() {
    int n,sz[1000][1000];
    int a,b,c,d,g;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
                    scanf("%d",&sz[i][k]);
            }
    }
    for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
                    if(sz[i][k]==0){
                    a=i;
                    b=k;
                    }
            }
    }
    for(int i=n-1;i>=0;i--){
            for(int k=n-1;k>=0;k--){
                    if(sz[i][k]==0){
                                    c=i;
                                    d=k;
                    }
            }
    }
    g=(a-c-1)*(b-d-1);
    printf("%d",g);
    return 0;
}