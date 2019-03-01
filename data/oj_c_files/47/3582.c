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

void NX();
int n;
int sz[100],nx[100];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    NX();
    for(int i=0;i<n;i++){
        if(i<n-1){
        printf("%d ",nx[i]);
        }else{
            printf("%d",nx[i]);
        }
    }
    return 0;
}
void NX(){
    int j;
    j=0;
    for(int i=n-1;i>=0;i--){
        nx[j]=sz[i];
        j++;
    }
}


