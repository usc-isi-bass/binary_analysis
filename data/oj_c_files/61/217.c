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

int suan(int n,int *p)
{ 
    p=(int*)malloc(sizeof(int)*n);
    if(n==1||n==2)
    {
                  *(p+n-1)=1;
    }
    else
    {
        *(p+n-1)=suan(n-1,p)+suan(n-2,p);
    }
    return *(p+n-1);
} 
int main()
{
    int b,n,i;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
    scanf("%d",&n);
    int a[n];
    int *p;
    p=a;
    printf("%d\n",suan(n,p));
    }
    getchar();
    getchar();
    getchar();
    }
