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
    int i,k;
    char a[200];
    gets(a);
    for(i=0;a[i]!='\0';i++){
        while(a[i]==' '&&a[i+1]==' '){
            for(k=i;a[k]!='\0';k++){
                a[k]=a[k+1];
            }
        }
    }
    for(i=0;a[i]!='\0';i++){
        printf("%c",a[i]);
    }
    return 0;
}

