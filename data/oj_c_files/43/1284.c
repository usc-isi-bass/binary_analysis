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

int f(int a)
{
    int i=2,m;
    m=sqrt(a);
    for(i=2;i<=m;i++)
    {
        if(a%i==0)break;
    }
    if(i>=m+1)return a;
    else return 0;
}
int main()
{
    int m;
    scanf("%d",&m);
    int i,p,q;
    for(i=3;i<=m/2;i=i+2)
    {
        p=f(i);q=f(m-i);
        if(p!=0&&q!=0)printf("%d %d\n",p,q);
    }


}
