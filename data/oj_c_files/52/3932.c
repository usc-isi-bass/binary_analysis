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
    scanf("%d %d",&n,&m);
    int a[100],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",a[n-m]);
    for(i=n-m+1;i<n;i++)
    printf(" %d",a[i]);
    for(i=0;i<(n-m);i++)
    printf(" %d",a[i]);
    getchar();
    getchar();
}