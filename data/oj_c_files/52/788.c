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
    int n,m;
    scanf("%d%d",&n,&m);
    int shu[100];
    for(int i=0;i<n;i++)
    {
            scanf("%d",&shu[i]);
    }
    int*p;
    p=&shu[n-1];
    int a;
    a=n-m;
    for(int i=0;i<m+n;i++)
    {
        p++;
        *p=shu[i];
    }
    for(int i=a;i<2*n-m-1;i++)
    {
        printf("%d ",shu[i]);
    }
    printf("%d",shu[2*n-m-1]);
    getchar();
    getchar();
    getchar();
    return 0;
}
                       
