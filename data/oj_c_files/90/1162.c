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

int f(int m,int n);
int f1(int m,int n)         //?????????
{
    if(n==1)
    return 0;
    else
    return f(m,n-1);
    }
int f2(int m,int n)         //???????
{
    if(m<n)
    return 0;
    else if(m==n)
    return 1;
    else
    return f(m-n,n);
    }
int f(int m,int n)
{
    return f1(m,n)+f2(m,n);
    }
main()
{
    int i,m,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",f(m,n));
        }
    }

