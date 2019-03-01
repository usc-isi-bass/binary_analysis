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

int su(int n)
{
    int i;
    for(i=2;i<n;i++)
    if(n%i==0)
    break;
    if(i==n)
    return 1;
    else
    return 0;
}
int hui(int n,int k,int m)
{
    if(k==0)
    if(m==n)
    return 1;
    else
    return 0;
    else
    return hui(n,k/10,m*10+k%10);
}
int main()
{
    int i,m,n;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    if(su(i)&&hui(i,i,0))
    {
        printf("%d",i);
        break;
    }
    if(i>n)
    printf("no");
    else
    for(i=i+1;i<=n;i++)
    if(su(i)&&hui(i,i,0))
    printf(",%d",i);
}
