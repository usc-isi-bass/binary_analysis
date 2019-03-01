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

int fenjie(int max,int min)
{
    int num=1,i,k;
    for(i=min;i<max/2;i++)
    {
        k=max%i;
        if(k==0)
        {
            if(i<=max/i)
            num+=fenjie(max/i,i);
        }
    }
    return num;
}
int main()
{
    int a[10000],n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("\n%d",&a[j]);
    }
    for(j=0;j<n;j++)
    {
        printf("%d\n",fenjie(a[j],2));
    }
    return 0;
}