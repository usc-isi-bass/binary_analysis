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

void main()
{
    char str[14], substr[4];
    while (scanf("%s%s",str,substr)!=EOF)
    {
            int i, p = 0, ch = 0, len = strlen(str);
            for (i = 0; i < len; i++)
            {
                if (str[i] > ch)
                {
                    ch = str[i];
                    p = i;
                }
            }
            for (i = 0; i < len; i++)
            {
                if (str[i] == str[p] && i < p)
                {
                    p = i;
                    break;
                }
            }
            for (i=len;i>=p+1;i--)
                str[i+3]=str[i];
            for (i=p+1;i<p+4;i++)
                str[i]=substr[i-1-p];
            printf("%s\n",str);
    }
}
