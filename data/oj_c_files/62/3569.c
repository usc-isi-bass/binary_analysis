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
    char a[200];
    int i,j,l,s;
    s=-1;
    gets(a);
    l=strlen(a);
    for(j=0;j<100000;j++){
    for(i=0;i<l-1;i++)
    {
        if(a[i]==' '&&a[i+1]==' ')
        {
            s=s+1;
            for(j=i;j<l-1;j++)
            {
                a[j]=a[j+1];
                a[l-s]='\0';
            }
        } 
    }}
    puts(a);
    return 0;
}
