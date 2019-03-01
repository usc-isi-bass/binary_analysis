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
    int n;
    scanf("%d",&n);
    int sz[n][2];
    int i;
    for(i=0;i<n;i++) {
        scanf("%d %d",&(sz[i][0]),&(sz[i][1]));
    }
    int A=0,B=0,k;
    for(i=0;i<n;i++) {
        k=sz[i][0]-sz[i][1];
        if(k==-1||k==2) {
            A++;
        }
        if(k==1||k==-2) {
            B++;
        }
    }
    if(A>B) {
        printf("A");
    }
    if(A<B) {
        printf("B");
    }
    if(A==B) {
        printf("Tie");
    }
    return 0;
}