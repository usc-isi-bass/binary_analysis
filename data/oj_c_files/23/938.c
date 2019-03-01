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
    int i=0,j=0;
    char s[100][100];
    while (scanf("%s",s[i])!=-1)
    {
        i++;
    }
    for (j=i-1;j>=1;j--)
    {
        printf("%s ",s[j]);
    }
    printf("%s",s[0]);

    return 0;
}
