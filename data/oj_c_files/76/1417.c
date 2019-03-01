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
    int n,i,m,max,min,p,s=0 ;
    double x;
    scanf("%d",&n);
    int zdd[n],ydd[n] ;
    for(i=0;i<n;i++) {scanf("%d %d",&zdd[i],&ydd[i]);}
    min=zdd[0] ;max=ydd[0] ;
        for(i=0;i<n;i++) {
            if(zdd[i]<min) {
                min=zdd[i];
            }
            if(max<ydd[i]) {
                max=ydd[i];
        }
    } 
    int y[max] ;
    for(i=min;i<max;i++) {
        y[i]=1 ;
    }
    for(x=min+0.5;x<=max;x++) {
        p=0 ;
        for(i=0;i<n;i++) {
        if((x>=zdd[i])&&(x<=ydd[i])){
            p++ ;
        } }
        if(p>0) {s++;}
    }
    if(s==max-min) {printf("%d %d",min,max); }
    else {printf("no");}
    return 0;
}

