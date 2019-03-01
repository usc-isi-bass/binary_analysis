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


void move(int a[],int b[],int n,int m)
{
    int i;
    for(i=0;i<=n-1;i++)
    {
        if(i>=m)
            b[i]=a[i-m];
        else
            b[i]=a[n-m+i];
    }
}

int main()
{
    int a[100],b[100],n,m,i;
    scanf("%d%d",&n,&m);
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    move(a,b,n,m);
    for(i=0;i<=n-2;i++)
        printf("%d ",b[i]);
    printf("%d",b[n-1]);
    return 0;
}