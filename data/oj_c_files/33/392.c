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
    char z[1000][256]; 
    for(int i=0;i<n;i++){
            scanf("%s",&z[i]);
            for(int j=0;j<strlen(z[i]);j++){
                    if(z[i][j]=='A')
                      z[i][j]='T';
                    else if(z[i][j]=='T')
                      z[i][j]='A';
                    if(z[i][j]=='C')
                      z[i][j]='G';
                    else if(z[i][j]=='G')
                      z[i][j]='C';
                    }
            }
    for(int i=0;i<n;i++){
           printf("%s\n",z[i]);
           }
    return 0;
}