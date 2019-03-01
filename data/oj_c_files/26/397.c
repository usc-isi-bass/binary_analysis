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
    char a[100];
    int i=0,j=1,k=1,l;
    gets(a);
    l=strlen(a);
    while(a[i]!='\0')
        {
            j=1;k=1;
            if(a[i]==' ')
                {
                       while(a[i+j]==' ')
                           {
                               j++;
                           }
                       while(a[i+j+k-1]!='\0')
                           {
                               a[i+k]=a[i+j+k-1];
                               k++;
                           }
                       a[i+k]='\0';
                }
            i++;
        }
    puts(a);
    getchar();
}
