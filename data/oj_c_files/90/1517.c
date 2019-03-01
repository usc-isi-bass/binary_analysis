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

int way(int m,int n);
int main()
{
    int N,m,n;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
            scanf("%d %d",&m,&n);
            printf("%d\n",way(m,n));
    }
}
int way(int m,int n)
{
    if(n==1)return 1;
    else if(m==n)return way(m,n-1)+1;
    else if(m<n)return way(m,m);
    else return way(m,n-1)+way(m-n,n);
}
