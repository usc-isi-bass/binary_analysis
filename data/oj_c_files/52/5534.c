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
    int a[100],b[100],m,n,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0,i=n-m;j<=m-1;j++,i++)
    b[j]=a[i];
    for(j=0;j<m;j++)
    {
        if(j==0)
        printf("%d",b[j]);
        else
        printf(" %d",b[j]);
    }
    for(i=0;i<n-m;i++)
    printf(" %d",a[i]);
    return 0;
}

