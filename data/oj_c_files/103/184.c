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
    char a[1000];
    int length,i,n;
    gets(a);
    length=strlen(a);
    for(i=0;i<length;i++)
    {
        if((a[i]>='a')&&(a[i]<='z'))
        a[i]=a[i]-DLTA;
        else
        ;
    }

                                         //make all letter capital
    n=1;
    for(i=0;i<length-1;i++)
    {
        if(a[i]==a[i+1])
        {
            n=n+1;
        }
        else
        {
            printf("(%c,%d)",a[i],n);
            n=1;
        }
    }
    n=1;
    for(i=length-1;a[i]==a[i-1];i--)
    {
        n=n+1;
    }
    printf("(%c,%d)",a[length-1],n);
}
