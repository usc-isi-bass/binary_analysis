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

int ys(int x,int min){
    int r=1;
    if(x<min)
    return 0;
    for(int i=min;i<x;i++){
            if(x%i==0)
              r+=ys(x/i,i);
            }
    return r;
}
int main(){
    int n,a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            }
    for(int i=0;i<n;i++){
            printf("%d\n",ys(a[i],2));
            }
    return 0;
}
