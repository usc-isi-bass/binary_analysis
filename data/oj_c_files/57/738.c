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
    int n, i;
    scanf("%d", &n);
    char sz[n][33];
    int num[n];
    for(i=0; i<n; i++){
        scanf("%s", &sz[i]);
        num[i]=strlen(sz[i]);
    }
    for(i=0; i<n; i++){
        if(sz[i][num[i]-2]=='l' && sz[i][num[i]-1]=='y'){
            sz[i][num[i]-2]='\0';
            sz[i][num[i]-1]='\0';
        }
        else if(sz[i][num[i]-2]=='e' && sz[i][num[i]-1]=='r'){
            sz[i][num[i]-2]='\0';
            sz[i][num[i]-1]='\0';
        }
        else if(sz[i][num[i]-3]=='i' && sz[i][num[i]-2]=='n' && sz[i][num[i]-1]=='g'){
            sz[i][num[i]-3]='\0';
            sz[i][num[i]-2]='\0';
            sz[i][num[i]-1]='\0';
        }
    }
    for(i=0; i<n; i++){
        printf("%s\n", sz[i]);
    }
}
