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

int f(int M,int N)
{
    int t;
    if(M>N)
    {
        if((N!=1)&&((M-N)!=1))
          t=f(M,N-1)+f(M-N,N);
        if((N!=1)&&((M-N)==1))
        t=1+f(M,N-1);
        if(N==1)
        t=1;
    }
    if((M==N)&&(M!=1))
    t=1+f(M,N-1);
    if((M==N)&&(M==1))
    t=1;
    if(M<N)
    t=f(M,N-1);
    return(t);
}
main()
{
    int n,i;
    scanf("%d",&n);
    int f(int M,int N);
    for(i=0;i<n;i++)
    {
        int M,N,K;
        scanf("%d %d",&M,&N);
        K=f(M,N);
        printf("%d\n",K);

    }

}
