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
    int n,i,k,l;
    scanf("%d",&n);
    char jj[256];
    for(i=0;i<n;i++){
        scanf("%s",jj);
        l=strlen(jj);
        for(k=0;k<l;k++){
            if(jj[k]=='A'){
                jj[k]='T';
                continue;
            }
            if(jj[k]=='T'){
                jj[k]='A';
                continue;
            }if(jj[k]=='C'){
                jj[k]='G';
                continue;
            }
            if(jj[k]=='G'){
                jj[k]='C';
                continue;
            }
        }
        printf("%s\n",jj);
    }
    
    
return 0;
}


