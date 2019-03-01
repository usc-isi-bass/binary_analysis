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


void main ()
{
    char a[1001];
    int i,j,k;
    gets(a);
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]>90)
        a[i]=a[i]-32;
    }
    for (i=0;a[i]!='\0';)
    {
        for (j=0;;j++)
        {
            if (a[i+j]!=a[i]) break;
        }
        printf("(%c,%d)",a[i],j);
        i=i+j;
    }
}
