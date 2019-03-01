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
    char c[100];
    gets(c);
    for (int i=1;c[i]!='\0';i++)
    {
        if ((c[i-1]==' ')&&(c[i]==' '))
        {
            for (int j=i;c[j]!='\0';j++) c[j]=c[j+1];
            i--;
        }
    }
    puts(c);
    return 0;
}
