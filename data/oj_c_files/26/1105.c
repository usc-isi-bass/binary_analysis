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

int main()
{
    int len,i,k,a;
    char zf[101];
    gets(zf);
    len=strlen(zf);
    for(i=0,k=0;i<len;i++){
        if(zf[i]==' '&&zf[i+1]==' '){
           continue;
        }
        zf[k]=zf[i];
        k++;
    }
    zf[k]='\0';
    puts(zf);
    return 0;
}