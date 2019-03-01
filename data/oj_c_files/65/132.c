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
    int n,i,a,b,c,d;
    scanf("%d",&n);
    i=1;
    c=0;
    d=0;
    while(i<=n){
        scanf("%d%d",&a,&b);
        if(a==b){
            i++;
        }else if(a==0&&b==1){
            c=c+1;
            i++;
        }else if(a==0&&b==2){
            d=d+1;
            i++;
        }else if(a==1&&b==0){
            d=d+1;
            i++;
        }else if(a==1&&b==2){
            c=c+1;
            i++;
        }else if(a==2&&b==0){
            c=c+1;
            i++;
        }else{d=d+1;
        i++;
        }
    }
    if(c>d){
        printf("A\n");
    }else if(c==d){
        printf("Tie\n");
    }else{printf("B\n");}
    return 0;
}
