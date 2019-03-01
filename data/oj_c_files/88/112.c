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
    char str[31];
    gets(str);
    int n;
    n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            printf("%c",str[i]);
        else
        {
            printf("\n");
            for(;str[i]<'0'||str[i]>'9';i++)
            {}
            i--;
        }
    }
    getchar();
}
