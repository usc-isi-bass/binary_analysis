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
    int n,i;
    char a[100],*p,b[100];
    p=a;
    gets(a);
    n=strlen(a);
    for(i=0;i<n-1;i++,p++)
    {
        b[i]=*p+*(p+1);
    }
    b[n-1]=a[0]+a[n-1];
    p=b;
    for(i=0;i<n;i++,p++) printf("%c",*p);
}