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
    int i,j,la,lb,lc,aaa;
    char a[256],b[256],c[256];
    gets(a);
    gets(b);
    gets(c);
    la=strlen(a);
    lb=strlen(b);
    lc=strlen(c);
    aaa=0;
    for (i=0;i<=la-1;i++)
    {

        for (j=0;(j<=lb-1)&&(i+j<=la-1);j++)
        {
            if (a[i+j]==b[j])
            {
                if (j==lb-1)
                {
                    aaa=1;
                }
            }
            else
            {
                break;
            }
        }
        if(aaa==1)
        {
            break;
        }
    }
    if(aaa==1)
    {
        for (j=0;j<=lc-1;j++)
        {
            a[i+j]=c[j];
        }
    }
    puts(a);
}
