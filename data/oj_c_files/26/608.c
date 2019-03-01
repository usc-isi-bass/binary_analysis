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

main()
{
    int i;
    char str[100];
    gets(str);
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' '&&str[i+1]!=' ')
    printf(" ");
    if(str[i]!=' ')
    printf("%c",str[i]);
    i++;
    }
}