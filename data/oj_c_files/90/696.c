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
    int f(int m,int n);
    int t;
    scanf("%d",&t);
    int i,m,n,a;
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        a=f(m,n);
        printf("%d\n",a);
    }
    
}


int f(int m,int n)
{
     if(m==0||n==1)
        return 1;
    if(m<n)
        return f(m,m);
    if(m>=n)
        return f(m,n-1)+f(m-n,n);
}
