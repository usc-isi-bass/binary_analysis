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


int n=0,k=0;

int f(int depth,int a)
{
    if (depth==n) return a;
    if (a%(n-1)==0) return f(depth+1,a*n/(n-1)+k);
    return 0;
}

int main()
{
    int i=1,t=0;
    cin>>n>>k;
    while(true)
    {
        t=f(1,i*n+k);
        if(t!=0)break;
        else i++;
    }
    cout<<t;
    return 0;
}