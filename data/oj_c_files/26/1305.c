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
    int i,m;
    char a[1000];
    gets(a);
    m=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            if(a[i+1]==' ')
            {
                continue;
            }else{
                printf("%c",a[i]);
            }
        }else{
            printf("%c",a[i]);
        }
    }
    return 0;
}


