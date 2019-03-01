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
    char str[10000][100];
    gets(str[0]);
    int i=0,j;
    while(str[i][0]!='e')
    {
                         i++;
                         gets(str[i]);
    }
    for(j=i-1;j>=0;j--)
    printf("%s\n",str[j]);
    getchar();getchar();
}
