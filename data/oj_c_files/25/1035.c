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

//??(11-12) ??2?N?? ??? 20121231

int A[1000]={1};

void m2(int n)
{
    int d=0;
    for(int i=0;i<=n;i++)
    {
        A[i]=A[i]*2+d;
        d=A[i]/10;
        A[i]%=10;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) m2(i);

    int i=999;
    while(A[i]==0) i--;
    while(i>=0) cout<<A[i],i--;
    return 0;
}
