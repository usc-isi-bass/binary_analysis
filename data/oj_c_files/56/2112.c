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
    char ch[6];
    char c;
    int j,k,n=0;
    do
    {
         n++;
         ch[n-1]=getchar();
    }while(ch[n-1]!='\n');
    n--;
    for(j=0;j<n/2;j++)
    {
        c=ch[j];
        ch[j]=ch[n-1-j];
        ch[n-1-j]=c;
    }
    for(k=0;k<n;k++)
       putchar(ch[k]);
    return 0;
}