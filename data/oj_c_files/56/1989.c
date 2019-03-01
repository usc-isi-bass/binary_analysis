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
    char a[6];
    int c;
    int i=0;
    do
    {
         c=getchar();
         a[i]=c;
          i++;
    }
    while (c!='\n');
    i-=2;
    for (;i>=0;i--)
    {
        cout<<a[i];
    }
}
