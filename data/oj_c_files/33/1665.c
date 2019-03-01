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
    int n,i,j;
    scanf("%d",&n);
    char zfc[n][256];
    char zf[n][256];
    
    for(i=0;i<n;i++){
        scanf("%s",zfc[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<255;j++){
            if(zfc[i][j]=='A'){
                zf[i][j]='T';
            }
            else if(zfc[i][j]=='T'){
                zf[i][j]='A';
            }
            else if(zfc[i][j]=='C'){
                zf[i][j]='G';
            }
            else if(zfc[i][j]=='G'){
                zf[i][j]='C';
            }
        }
    }
    for(i=0;i<n-1;i++){
        printf("%s\n",zf[i]);
    }
    printf("%s",zf[n-1]);
    return 0;
}

