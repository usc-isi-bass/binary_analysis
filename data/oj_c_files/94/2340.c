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
    int n;
    scanf("%d",&n);
    int sz[500];
    int js[500];
    for(int i=0;i<n;i++){
        scanf("%d",&(sz[i]));
    }
    for(int i=0;i<n;i++){
        if((sz[i])%2!=0){
            js[i]=sz[i];
        }
    }
    int e;
    for(int k=0;k<=n;k++){
        for(int i=0;i<n-1;i++){
            if((js[i])>(js[i+1])){
                e=js[i+1];
                js[i+1]=js[i];
                js[i]=e;
            }
        }
    }
    for(int i=0;i<n;i++){
        if((js[i])!=0&&i!=n-1){
        printf("%d,",(js[i]));
        }else if(i==n-1){
            printf("%d",(js[i]));
        }
    }return 0;
}
