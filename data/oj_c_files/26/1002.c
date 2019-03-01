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
    int i,j,k;
    char a[100],b[100];
    j=0;
    gets(a);
    k=strlen(a);
    for(i=0;i<k;i++){
        if(a[i]!=' '){
            b[j]=a[i];
            j++;
        }
        else if(a[i]==' '&&a[i+1]==' '){
            j=j;
        }
        else if(a[i]==' '&&a[i+1]!=' '){
            b[j]=a[i];
            j++;
        }
    }
    b[j]=0;
    puts(b);
    return 0;
}
