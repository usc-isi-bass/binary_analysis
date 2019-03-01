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
    int i,j;
    i=0;
    j=1;
    char a[1001];
    gets(a);
    do
    {
        if(a[i]>'Z')
        {
            a[i]=a[i]-('a'-'A');
        }
        i=i+1;
    }
    while(a[i]!='\0');
    i=0;
    do
    {
        if(a[i]==a[i+1])
        {
            j=j+1;
        }
        else
        {
            printf("(%c,%d)",a[i],j);
            j=1;
        }
        i=i+1;
    }
    while(i<1001&&a[i]!='\0');
    return 0;
}
