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

int way=0;
int main()
{
    int apple(int n,int m);
    int t,n,m,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        cout<<apple(n,m)<<endl;
    }
    return 0;
}
int apple(int n,int m)
{
    if(m==1||n==1)
    {
        way=1;
    }
    if(m==n)
    {
        way=apple(n,m-1)+1;
    }
    if(m!=n&&m!=1&&n!=1)
    {
        if(n>m)
        way=apple(n,m-1)+apple(n-m,m);
        else
        way=apple(n,n);
    }
    return way;
}
