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
    char c[1000];
    scanf("%s",c);
    int i;
    for(i=0;c[i]!='\0';i++)
    {
        if((c[i]>='a')&&(c[i]<='z'))
        c[i]=c[i]+'A'-'a';
    }
    int m,n;
    n=1;
    for(m=0;c[m]!='\0';m++)
    {
        if(c[m]!=c[m+1])
        {
            printf("(%c,%d)",c[m],n);
            n=1;
        }
        else
        n++;
    }
}
