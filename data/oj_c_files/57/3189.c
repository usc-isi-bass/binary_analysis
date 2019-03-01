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
    int n,i;
    int l[50];
    char w[50][33];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%s\n",w[i]);
        l[i]=strlen(w[i]);
    }
    for(i=0;i<n;i++){
        if(w[i][(l[i])-1]=='r'){
            l[i]-=2;
        }else if(w[i][(l[i])-1]=='y'){
            l[i]-=2;
        }else if(w[i][(l[i])-1]=='g'){
            l[i]-=3;
        }
    }
    for(i=0;i<n;i++){
        for(int j=0;j<l[i];j++){
            printf("%c",w[i][j]);
        }
        printf("\n");
    }
    return 0;
}

