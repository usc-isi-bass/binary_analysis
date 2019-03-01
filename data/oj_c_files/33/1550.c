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
    int n;
    scanf("%d",&n);
    char sr[n][256];
    for(int i=0;i<n;i++){
        scanf("%s",sr[i]);
    }
    for(int i=0;i<n;i++){
        int m=strlen(sr[i]);
        for(int j=0;j<m;j++){
            if(sr[i][j]=='T'){
                printf("A");
            }
            if(sr[i][j]=='A'){
                printf("T");
            }
            if(sr[i][j]=='C'){
                printf("G");
            }
            if(sr[i][j]=='G'){
                printf("C");
            }
            if(j==m-1){
                printf("\n");
            }
        }
    }
    return 0;
}


