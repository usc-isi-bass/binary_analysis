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
    char a[501],b[501];
    int r,t,n,q,e,i;
    double m,w;
    n=0;
    r=0;
    scanf("%lf %s %s",&m,a,b);
    q=strlen(a);
    e=strlen(b);
    for(i=0;a[i]!='\0';i++){
        if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
            r++;
        }
    }
    for(i=0;b[i]!='\0';i++){
        if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
            r++;
        }
    }
    if(q!=e||r!=0){
        printf("error");
    }
    else{
    for(i=0;a[i]!='\0';i++){
        t=a[i]-b[i];
        if(t==0){
            n++;
        }
    }
    w=1.0*n/q;
    if(w>m){
        printf("yes");
    }
    else{
        printf("no");
    }
    }
    return 0;
}

