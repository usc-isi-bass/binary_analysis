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
    int i, len;
    char str[102];

    gets(str);

    len=strlen(str);
    *(str+len)=*str;

    for(i=0; i<len; i++)
    {
        *(str+i)=*(str+i)+*(str+i+1);
    }

    for(i=0; i<len; i++)
    {
        printf("%c", *(str+i));
    }

    return 0;
}