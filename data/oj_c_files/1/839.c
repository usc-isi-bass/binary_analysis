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

int f(int m,int j);
int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        cout<<f(m,2)<<endl;
    }
    return 0;
}
int f(int m,int j)          //
{
    int num=1;
    for(int i=j;i<=sqrt(m);i++)
    {
        if(m%i==0)
        {
            num+=f(m/i,i);
        }
    }
    return num;
}
