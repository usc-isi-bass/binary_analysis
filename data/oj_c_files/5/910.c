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
    double c,m,n=0,p,q;
    int i,t=0;
    scanf("%lf",&c);
    scanf("%s",a);
    scanf("%s",b);
    q=strlen(a);
    p=strlen(b);
    if(q!=p){
        t=t+1;
    }
    for(i=0;i<q;i++){
        if(a[i]!='T'&&a[i]!='C'&&a[i]!='G'&&a[i]!='A'){
            t=t+1;
        }
    }
    for(i=0;i<p;i++){
        if(b[i]!='T'&&b[i]!='C'&&b[i]!='G'&&b[i]!='A'){
            t=t+1;
        }
    }
    if(t!=0){
        printf("error");
    }
    else{
        for(i=0;i<p;i++){
            if(a[i]==b[i]){
                n=n+1;
            }
        }
        m=n/p;
        if(m>c)printf("yes");
        else printf("no");
    }
    return 0;
}
