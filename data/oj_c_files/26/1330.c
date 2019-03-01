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
    char sz[101],sz2[101];
    int i,k=0,m;
    gets(sz);
     m = strlen(sz);
    for(i=0;i<=m;i++){
        if(!(sz[i]==' '&&sz[i+1]==' ')){
            sz2[k++]=sz[i];
        }
    }
    sz2[k]='\0';
    puts(sz2);
    return 0;
}

