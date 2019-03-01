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
    char str[101],a[101];
    int n,i,j,k;
    gets(str);
    n=strlen(str);
    j=0;

    for (i=0;i<n;i++)
    {
        if (str[i]!=' ')
            printf("%c",str[i]);
            if (str[i]==' ')
            {
                if (str[i+1]!=' ')
                    printf(" ");
                }
    }
    return 0;
}