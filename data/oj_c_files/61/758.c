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
    int i,n,a[20],m;
    int f[20]={1,1};
    for(i=2;i<20;i++)
    f[i]=f[i-2]+f[i-1];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&m);
    a[i]=f[m-1];
    }   
    for(i=1;i<=n;i++)
    printf("%d\n",a[i]);
    getchar();
    getchar();
    return 0;
}
