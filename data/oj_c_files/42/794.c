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
    int n,a[100001],k,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
                     if(a[i]==k)
                     {
                                for(j=i;j<n;j++)
                                {
                                a[j]=a[j+1];
                                }
                                n--;
                                i--;
                     }
    }
    for(i=1;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("%d\n",a[n]);
    getchar();
    getchar();
    getchar();
}
 
