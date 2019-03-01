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

int f(int m,int n,int j)
{
    int i,s=0;
    if(n==1)
    {
        return m>=j;
    }
    for(i=j;i<m;i++)
    {
        s+=f(m-i,n-1,i);
    }
    return s;
}

int main()
{
    int m,n,l;
    scanf("%d\n",&l);
    while(l--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",f(m,n,0));
    }
    return 0;
}

