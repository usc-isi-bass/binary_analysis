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


void sort(int a[],int n)
{
    int i,j,t;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

void ipt(int a[],int n)
{
    int i=1;
    while(i<=n)
    {
        scanf("%d",&a[i]);
        if(i!=n) scanf(" ");
        i++;
    }
}

void opt(int a[],int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d",a[i]);
        if(i!=n) printf(" ");
        i++;
    }
}

main()
{
    int n,m,a[100],b[100];
    scanf("%d%d",&n,&m);
    ipt(a,n);
    ipt(b,m);
    sort(a,n);
    sort(b,m);
    opt(a,n);
    printf(" ");
    opt(b,m);
}