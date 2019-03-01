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
    if(M==0)
    return 1;
    if(N==0)
    return 0;
    if(M==1||N==1)
    return 1;
    if(M<N)
    return f(M,M);
    else
    return f(M,N-1)+f(M-N,N);
}

int main()
{
    int t,M,N,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>M>>N;
        cout<<f(M,N)<<endl;
    }
    return 0;
}
