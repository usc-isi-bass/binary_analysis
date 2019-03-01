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
    int i,k=0;
    char a[100],b[100]={'\0'};
    gets(a);
    b[0]=a[0];
    for(i=1;a[i]!='\0';i++){
        if((a[i]==' ')&&(a[i-1]==' ')){
            ;
        }else{
            k++;
        }
        b[k]=a[i];
    }
    puts(b);
    return 0;
}