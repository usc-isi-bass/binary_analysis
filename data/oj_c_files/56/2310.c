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
    char num[10]={'a'};
    int i,sum=0;
    scanf("%s",num);
    for(i=0;i<10;i++)
    {
                     if((num[i]>='0')&&(num[i]<='9')==1)
                     sum++;
                     else
                     break;
    }
    for(i=sum-1;i>=0;i--)
    {
                         printf("%c",num[i]);
    }

    return 0;
}