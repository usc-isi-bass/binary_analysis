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
    char a[1000];
    gets(a);
    int k=0;
    int i,l;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
                    if (a[i]!=' ')
                    {k=0;
                    printf("%c",a[i]);}
                    else 
                    {
                         k++;
                         if (k==1)
                         printf("%c",a[i]);
                    }
    }
    getchar();
}

