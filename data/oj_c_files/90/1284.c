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

int solve(int,int);
int main()
{
    int i,j,k;
    int t,m,n;
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>m>>n;
        cout<<solve(m,n)<<endl;
    }
    return 0;
}
int solve(int m,int n)
{
    if(m==0 || n==1) return 1;
    else if(m<n) return solve(m,m);
    else
    {
        return (solve(m,n-1)+solve(m-n,n));
    }
}
