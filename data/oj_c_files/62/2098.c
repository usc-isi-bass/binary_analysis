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
    char sh[1000],ch[500]={0},temp[500];
    int n,m,i,j=0,k;
    gets(sh);
    n=strlen(sh);
    for(i=0; i<n; i++)
    {

        if(sh[i]!=' ')
        {
            ch[j]=sh[i];
            j=j+1;
        }
        if(sh[i]==' ')
        {
            if(sh[i-1]==' ')
                continue ;
            if(sh[i-1]!=' ')
                ch[j]=' ';
                 j=j+1;
        }
    }

    printf("%s",ch);
    return 0;
}
