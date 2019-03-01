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
    int i;
    double a,b=0,l,m,c=0;
    char x[1000],y[1000];
    scanf("%lf %s %s",&a,&x,&y);
    l=strlen(x);
    m=strlen(y);
    for(i=0;i<l;i++){
        if(x[i]=='A'||x[i]=='T'||x[i]=='G'||x[i]=='C'){
            c=c;
        }
        else{
            c++;
        }
    }
    for(i=0;i<m;i++){
        if(y[i]=='A'||y[i]=='T'||y[i]=='G'||y[i]=='C'){
            c=c;
        }
        else{
            c++;
        }
    }
    if(l==m&&c==0){
        for(i=0;i<l;i++){
            if(x[i]==y[i]){
                b++;
            }
        }
        if(a<(b/l)){
            printf("yes");
        }
        else{
            printf("no");
        }
    }
    else{
        printf("error");
    }
    return 0;
}