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
    char a[80],b[80],i,j,k;
    gets(a);
    gets(b);
    j=strlen(a);
    k=strlen(b);
    for (i=0;i<j;i++)
    {
        if (isupper(a[i]))
        a[i]=tolower(a[i]);
    }
    for (i=0;i<k;i++)
    {
        if (isupper(b[i]))
        b[i]=tolower(b[i]);
    }
    if (strcmp(a,b)>0)
    printf(">");
    if (strcmp(a,b)<0)
    printf("<");
    if (strcmp(a,b)==0)
    printf("=");
    return 0;
}
