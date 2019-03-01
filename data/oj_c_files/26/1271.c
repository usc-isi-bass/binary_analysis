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
    char a[101];
    int i,j,n;
    gets(a);
    n=strlen(a);
    i=0;
    while(i<n){
        if(a[i]==' '&&a[i+1]==' '){
            for(j=i+1;j<n+1;j++){
                a[j-1]=a[j];
            }i=i;
        }else{
            i++;
        }
    }
    puts(a);
    return 0;
}
