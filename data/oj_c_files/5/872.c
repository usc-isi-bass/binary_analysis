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
    double n,x,y,m,t;
    x=0;
    int i,c;
    c=0;
    char a[501],b[501];
    scanf("%lf",&n);
    scanf("%s%s",a,b);
    m=strlen(a);
    t=strlen(b);
    if(m!=t){
        printf("error");
    }else{
        for(i=0;i<m;i++){
            if(((a[i]=='A')||(a[i]=='T')||(a[i]=='C')||(a[i]=='G'))&&((b[i]=='A')||(b[i]=='T')||(b[i]=='C')||(b[i]=='G'))){
                if(a[i]==b[i]){
                    x=x+1;
                }
            }else{
                c=c+1;
            }
        }
        y=x/m;
        if(c>0){
            printf("error");
        }else{
            if(y>n){
                printf("yes");
            }else{
                printf("no");
            }
        }
    }
    return 0;
}
