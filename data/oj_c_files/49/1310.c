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
    int a,b,c,n,m;
    char x[510];
    gets(x);
    n=strlen(x);
    for(a=1;a<=n-1;a++)
    {
        for(b=0;b<=n-1-a;b++)
        {
            m=0;
            for(c=0;c<=a/2;c++)
            {
                if(x[b+c]!=x[b+a-c])
                m=1;
                else;
            }
            if(m==0)
            {
                for(c=b;c<=b+a;c++)
                printf("%c",x[c]);
                printf("\n");
            }
            else;
        }
    }
}
