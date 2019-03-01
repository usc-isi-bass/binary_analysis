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
    int l,i,j;
    char a[100];
    gets(a);
    l=strlen(a);    
    for(i=1;i<l;i++)
        if(a[i-1]==' '&&a[i]==' ')
        {
            for(j=i;j<l;j++)
                a[j]=a[j+1];
            i--;
        }
    puts(a);
}