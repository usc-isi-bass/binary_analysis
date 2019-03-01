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
    int n,i;
    char c[100]={'\0'};
    gets(c);
    n=(int )strlen(c);
    for (i=0; i<n; i++)
    {
        if (i<n-1) printf("%c",c[i]+c[i+1]);
        else printf("%c",c[i]+c[0]);
    }
}
