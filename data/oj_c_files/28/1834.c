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
    char a[10000];
    int i,s=0;
    gets(a);
    for (i=0;i<strlen(a);i++)
    {
        if (a[i]!=' ')
        s=s+1;
        else if (a[i]!=a[i-1])
        {
            printf("%d",s);
            if (i+1<strlen(a)) printf(",");
            s=0;
        }
    }
    printf("%d",s);

    return 0;
}
