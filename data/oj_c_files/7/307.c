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

int main (){
    int i,k,n,m,L,l1,l2;
    char s[1000],a[300],b[300];
    scanf("%s",s);
    scanf("%s",a);
    scanf("%s",b);
    getchar();
    L=strlen(s);
    l1=strlen(a);
    l2=strlen(b);
    n=0;
    for (i=0;i<L;i++){
        if ( a[0]==s[i] ){
             n++;
             for ( k=1; k<l1; k++){
                 if ( s[i+k]==a[k]){
                      n++;
                 } else {
                        n=0;
                        break;
                 }
             }
        }
        if ( n==l1){
             break;
        }
    }
    for (k=0;k<i;k++){
        printf("%c",s[k]);
        getchar();
    }
    for ( k=0;i!=L&&k<l2;k++){
        printf("%c",b[k]);
        getchar();
    }  
    for ( k=i+l1;i!=L&&k<L;k++){
        printf("%c",s[k]);
        getchar();
    }
    return 0;
}

