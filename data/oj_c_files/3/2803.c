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
    int n,k,x;
    x=0;
    scanf("%d%d",&n,&k);
    int sz[n];
    for (int i=0;i<n;i++){
        scanf("%d",&(sz[i]));
    }
    for(int i=0;i<n;i++){
        for(int a=0;a<n;a++){
            if(sz[i]+sz[a]==k&&i!=a){x++;}
        }
    }
    if(x==0){printf("no");}
    else{printf("yes");}
}




