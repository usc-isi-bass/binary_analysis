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

int seven(int a)
{
    int mod;
    if (a%7==0)return 1;
    while(a>0)
    {mod=a%10;
    if(mod==7)return 1;
    a/=10;}
    return 0;
}
int main()
{
    int n,i;
    int sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    if(seven(i)!=1)sum=sum+i*i;
    PD(sum);
    return 0;
}