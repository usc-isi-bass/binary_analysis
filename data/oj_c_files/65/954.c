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
    int s=0,t=0,i,j,a,b,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a==b){
            continue;
        }
        else if(a==0){
            if(b==1){
                s++;
            }
            else {t++;}
        }
        else if(a==1){
            if(b==2){
                s++;
            }
            else {t++;}
        }
        else if(a==2){
            if(b==0){
                s++;
            }
            else t++;
        }
    }
    if(s>t){
        printf("A");
    }
    else if(s<t){
        printf("B");
    }
    else printf("Tie");
    return 0;
}

