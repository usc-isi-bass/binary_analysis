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

int main ()
{
    int n,a,b,flag=0;
    int sushu(int x);   
    scanf("%d",&n);
    for(a=4;a<=n;a++)
    {
                if(sushu(a)==1&&sushu(a-2)==1)
                {
                printf("%d %d\n",a-2,a);
                flag=1;
                }
    }
    if(flag==0)
    printf("empty\n");
    return 0;
}
int sushu(int x)
{
    int k=1;
    double t=sqrt(x);
    for(int i=2;i<=t;i++)
        if(x%i==0)
        k=0;
    return k;
}
