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
    char jz[101],xg[101];
    gets(jz);
    int i,j,len;
    len=strlen(jz);
    for(i=0,j=0;i<len-1;i++){
        if(jz[i]!=' '){
            xg[j]=jz[i];
            j++;
        }else if(jz[i+1]!=' '){
            xg[j]=jz[i];
            j++;
        }
    }xg[j]=jz[len-1];
    for(int k=j+1;k<101;k++){
        xg[k]='\0';
    }
    puts(xg);
    return 0;
}