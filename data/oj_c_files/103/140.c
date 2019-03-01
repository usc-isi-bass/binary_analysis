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

char shift(char y)
{
    char x;
    if(y>='a')
    x=y-'a'+'A';
    else
    x=y;
    return x;
    }
main()
{
    char a[101];
    int i,sum=1;
    scanf("%s",a);
    printf("(%c,",shift(a[0]));
    for(i=1;;i++)
    {
        if(shift(a[i])==shift(a[i-1]))
        {
            sum++;
            }
        if((shift(a[i])!=shift(a[i-1]))&&(a[i]!='\0'))
        {
            printf("%d)(%c,",sum,shift(a[i]));
            sum=1;
            }
        if(a[i]=='\0')
        {
            printf("%d)",sum);
            break;
            }
        }
    }
