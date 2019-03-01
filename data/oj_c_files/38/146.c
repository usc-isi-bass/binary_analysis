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

double x[1001],a,S;
int f(int k)
{
    int i;
    a=0;
    S=0;
    for(i=0;i<k;i++)
    {scanf("%lf",x+i);a+=*(x+i);}
    for(i=0;i<k;i++)
    {S+=pow((*(x+i)-a/k),2);}
    S=S/k;S=sqrt(S);
}
int main()
{
    int i,k,n;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
                    scanf("%d",&n);
                    f(n);
                    printf("%.5f\n",S);
    }
    return 0;
}
