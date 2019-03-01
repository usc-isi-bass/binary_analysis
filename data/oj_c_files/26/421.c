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
    int i,j,k;
    char c[120];
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]==' '&&c[i+1]==' ')
        {
             for(j=(i+1);c[j]==' ';j++);
             for(k=1;c[j+k-1]!=' '&&c[j+k-1]!='\0';k++)
             {
                 c[i+k]=c[j+k-1];
                 c[j+k-1]=' ';
             }
             if(c[j+k-1]=='\0')
             c[i+k]=c[j+k-1];
        }
    }
    printf("%s",c);
    getchar();
}