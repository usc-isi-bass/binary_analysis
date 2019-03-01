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

int read();
void updown();
void print();
int a[100],b[100],n;
int main()
{
    read();
    updown();
    print();
    return 0;
}
int read()
{
    int i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    return 0;
}
void updown()
{
    int i;
    for (i=1;i<=n;i++)
    {
        b[i]=a[n-i+1];
    }
    return;
}
void print()
{
    int i;
    for (i=1;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("%d",b[n]);
    return;
}

