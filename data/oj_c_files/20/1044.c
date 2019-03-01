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

int main ()
{
    int i, n, a,m;
    char str[11],substr[4];

        while (scanf("%s%s",str,substr)!=EOF)

        {
            n=strlen(str);
            m=0;

            for (i=0;i<n;i++)
            {
                if (str[i]>m)
                {
                    m=str[i];
                    a=i;
                }
            }


            for (i=0;i<n;i++)
            {
                printf("%c",str[i]);
                if (i==a)
                    printf("%s",substr);
            }
            printf("\n");
        }

}