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
    char a[201], b[201];
    int m, n=0, len;
    gets(a);
    len=strlen(a);
    for(m=0;m<len;m++){
        if(a[m]==' '&&a[m+1]==' '){}else{
            b[n]=a[m];
            n++;
        }
    }
    b[n]='\0';
    printf("%s", b);
    return 0;
}

