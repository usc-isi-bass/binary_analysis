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



int main()
{
    int i,n,m,a[100],*p;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
    if (i-m>=0)
    {
    printf("%d",*(a+i-m))   ;
    if(i!=n-1)
    {
    printf(" ")  ;
    }
    continue;
    }
        printf("%d ",*(a+n-m+i));

    }



    
    return 0;
}
