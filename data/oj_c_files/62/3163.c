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
    char a[300];
    gets(a);
    int i,j;
    int LEN;
    for(i=0,j=0;j<strlen(a);i++,j++){
        while(a[j]==' ' && a[j+1]==' ')
        j++;
        a[i]=a[j];
        LEN=i;
    }
    a[LEN+1]='\0';
    printf("%s",a);
    return 0;
}

