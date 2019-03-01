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
    char c[31];
    gets(c);
    int i=0,j;
    int a=0,b=0,num=0,len;
    len=strlen(c);
    while (i<=len)
    {
        if ((c[i]<='9')&&(c[i]>='0'))
        {
            if (num==0) a=i;
            b=i;num++;
        }
        else
        {
            if (num>0)
            {
                for (j=a;j<=b;j++)
                {
                    printf("%c",c[j]);
                }
                printf("\n");
                b=i;num=0;
            }
        }
        i++;
    }
    return 0;
}
