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
    int num[1000],n,m,i;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++)
{scanf("%d",&num[i]);}
    for(i=n+1;i<=2*n;i++)
    {num[i]=num[i-n];}
    for(i=n+1-m;i<=2*n-m;i++)
    {if(i==n+1-m)
    printf("%d",num[i]);
    else
    printf(" %d",num[i]);}
    getchar();
    getchar();
    return 0;}
