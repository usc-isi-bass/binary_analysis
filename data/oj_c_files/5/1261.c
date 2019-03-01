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
    int i,j,c,d;
    double l,m,n,x=0;
    char a[500],b[500];
    scanf("%lf %s %s",&l,&a,&b);
    
    m=strlen(a);
    n=strlen(b);
    for(i=0;i<m;i++){
        if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T'){
            d=0;
        }else{d=1;}
        
    }
    if(c!=0&&d!=0&&n==m){
        for(i=0;i<n;i++){
            if(a[i]==b[i]){
                x++;
            }else{x=x;}
        }
        if(l<(x/n)){
            printf("yes");
        }else{printf("no");}
    }else{printf("error");}
    return 0;
}
