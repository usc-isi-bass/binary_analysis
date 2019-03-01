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
    int n;
    int a[21];
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=20;i++)
    a[i]=a[i-1]+a[i-2];
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++)
   { scanf("%d",&b[n]);
    printf("%d\n",a[b[n]]);}
    getchar();
    getchar();
}
