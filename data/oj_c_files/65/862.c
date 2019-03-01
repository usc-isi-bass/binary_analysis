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
    int n,a,b;
    scanf("%d",&n);
    int aa[n],bb[n];
    a=0;
    for(int i=0;i<n;i++){
        scanf("%d%d",&aa[i],&bb[i]);
    }
    for(int i=0;i<n;i++){
        if(aa[i]==0&&bb[i]==1){
            a++;
        }
        if(aa[i]==1&&bb[i]==2){
            a++;
        }
        if(aa[i]==2&&bb[i]==0){
            a++;
        }
        if(aa[i]==1&&bb[i]==0){
            a--;
        }
        if(aa[i]==2&&bb[i]==1){
            a--;
        }
        if(aa[i]==0&&bb[i]==2){
            a--;
        }
    }
    if(a==0){
        printf("Tie");
    }
    if(a>0){
        printf("A");
    }
    if(a<0){
        printf("B");
    }
    return 0;
}
