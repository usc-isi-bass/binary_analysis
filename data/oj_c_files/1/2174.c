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

int divide(int a,int b)
{
    int i,r;
    r=1;
    for(i=b;i<a;i++)
    {
                    if(((a/i)*i)==a&&(a/i)>=i) r=r+divide(a/i,i);
    }
    return r;
}
int main()
{
    int s,p,n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
                    scanf("%d",&p);
                    s=divide(p,2);
                    printf("%d\n",s);
    }
}