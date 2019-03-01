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
    int i,n,k,m;
    m=1;
    scanf("%d%d",&n,&k);
    if (n==2) 
    {
    for (i=1;i<=n+1;i++)
    m=m*n;
    m=m-k*n+k;
    printf("%d",m);
    }
    else
    {
    for (i=1;i<=n;i++)
    m=m*n;
    m=m-k*n+k;
    printf("%d",m);
    }
    return 0;
}