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
    int k,i;
    scanf ("%d",&k);
    for (i=0;i<k;i++)
    {
        int m,n,**p,a,b,sum;
        scanf ("%d%d",&m,&n);
        p=(int**)malloc(m*sizeof(int*));
        for (a=0;a<m;a++)
        p[a]=(int*)malloc(n*sizeof(int));
        for (a=0;a<m;a++)
        {
            for (b=0;b<n;b++)
            scanf ("%d",*(p+a)+b);
        }
        sum=0;
        for (b=0;b<n;b++)
        sum=sum+*(*p+b)+*(*(p+m-1)+b);
        for (a=1;a<m-1;a++)
        sum=sum+**(p+a)+*(*(p+a)+n-1);
        printf ("%d\n",sum);
    }
    return 0;
}
