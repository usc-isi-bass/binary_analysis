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
    int i,n,j=0,*p,*q,a,b;
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    q=malloc(n*sizeof(int));
    for (i=0;i<n;i++)
    {
        *(p+i)=0;
        *(q+i)=0;
    }
    while (1)
    {
        scanf("%d %d",&a,&b);
        if (a==0&&b==0) break;
        *(p+b)=*(p+b)+1;
        *(q+a)=*(p+a)+1;
    }
    for (i=0;i<n;i++)
    {
        if (*(p+i)==n-1&&*(q+i)==0)
        {printf("%d\n",i);j=1;}
        //printf("%d %d\n",*(p+i),*(q+i));
    }
    if (j==0) printf("NOT FOUND");
}

