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
    int feb(int x);
    int n,i,j,a[1000],f;
    scanf("%d",&n); 
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {
    f=feb(a[j]);
    printf("%d\n",f);
    }
    getchar();
    getchar();
}
int feb(int x)
{
    int i;
    int a[x+1];
    a[1]=1;
    a[2]=1;
    for(i=3;i<=x;i++)
    a[i]=a[i-1]+a[i-2];
    return(a[x]);
}