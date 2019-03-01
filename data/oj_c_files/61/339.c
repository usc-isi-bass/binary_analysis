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
    int t[20],n,i,j,a,b,c;
    i=0;
    scanf("%d",&n);
    while (i<n)
    {
        scanf("%d",&t[i]);
        i=i+1;
    }
    i=0;
    while (i<n)
    {
        a=1;
        b=1;
        j=1;
        while (j<t[i])
        {
            c=b;
            b=a+b;
            a=c;
            j=j+1;
        }
        printf("%d\n",a);
        i=i+1;
    }
}