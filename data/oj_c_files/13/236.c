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
    int a[20000],n=0,i=0,j=0,c=0;
    
    for (i=0;i<20000;i++) a[i]=0;

    scanf("%d\n",&n);
    scanf("%d",&a[0]);
    for (i=1;i<n;i++)
       scanf(" %d",&a[i]);
       
    printf("%d",a[0]);

    for (i=1;i<n;i++)
    {
        c=0;
        for (j=0;j<i;j++)
        if (a[j]==a[i])  c=1;
        if (c==0) printf(" %d",a[i]);
    }  
}
