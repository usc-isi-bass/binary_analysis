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
    int a[1001],b[1001],x[1001],i,j,k,l,m=0,n;
    char c;
    c=','; 
    scanf("%d",&a[1]);
    i=2;
    while (scanf(",%d",&a[i])) i++;
    scanf("%d",&b[1]);
    i=2;
    while (scanf(",%d",&b[i])) i++;
    n=i-1;
    for (i=1;i<=n;i++)
        for (j=a[i];j<b[i];j++)
             x[j]++;
    l=0;
    for (i=0;i<=1000;i++)
        if (x[i]>l) l=x[i];
    printf("%d %d",n,l);
    scanf("%d",&i);
}
