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

int a[100],n,m;
int main()
{
    int i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n-m;i++)
    {
        scanf("%d",a+m+i);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i<n-1)   putchar(' ');
    }
    putchar('\n');
    return 0;
}
