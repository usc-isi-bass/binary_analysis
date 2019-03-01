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
    int i,n,j,q=0;
    char a[101];
    gets(a);
    n=strlen(a);
    for(i=0;i<n-1;i++){
        if(a[i]==' '&&a[i+1]==' '){
            while(a[i+1]==' '){
           for(j=i;j<n-1;j++){
           a[j]=a[j+1];
           }
           q++;
            }
        }
    }
    a[n-q]='\0';
    printf("%s",a);
    return 0;
}
