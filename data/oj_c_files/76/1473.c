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
    int n,i,x,y;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d %d\n",&(a[i]),&(b[i]));
    }
    x=a[0];
    y=b[0];
    for(i=1;i<n;i++) {
        if(a[i]<x) {
            x=a[i];
        }
        if(b[i]>y) {
            y=b[i];
        }
    }
    int z;
    z=x;
    for(int k=0;k<n;k++) {
        for(i=0;i<n;i++) {
            if(a[i]<=z&&b[i]>z) {
                z=b[i];
            }
        }
    }
    if(z==y) {
        printf("%d %d",x,y);
    }
    if(z!=y) {
        printf("no");
    }
    return 0;
}