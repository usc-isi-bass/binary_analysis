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
    int n,j,k,count=0,l,i;
    scanf("%d",&n);
    int *a=(int *)malloc(n*n*sizeof(int));
    int *b=(int *)malloc(n*n*sizeof(int));
    for(i=0;i<=n*n-1;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]==0&&b[i]==0)
        {
            break;
        }
        count++;
    }
    int *c=(int *)malloc(n*sizeof(int));
    for(l=0;l<=n-1;l++)
    {
        c[l]=1;
    }
    for(j=0;j<=count-1;j++)
    {
        c[b[j]]++;
    }
    for(k=0;k<=n-1;k++)
    {
        if(c[k]==n)
        {
            printf("%d",k);
            break;
        }
    }
    if(k==n)
    {
        printf("Not Found!");
    }
    free(a);
    free(b);
}