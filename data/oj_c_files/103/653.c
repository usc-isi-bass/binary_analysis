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
    char str[1000];
    gets(str);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]<'a')
        str[i]=tolower(str[i]);
    }
    int a=1;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=str[i+1])
        {
        printf("(%c,%d)",str[i]-'a'+'A',a);
        a=1;
        }
        else a++;
    }

}