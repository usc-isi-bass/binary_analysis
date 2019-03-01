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
    int a[500]={0},n,i=0,t,tmax=1;
    cin>>n;
    for(i=0;i<500;i++)
    {
        cin>>t;
        if(t%2==1)  a[t]=1;
    }
    for(i=0;i<500;i++)
    {
        if(a[i]==1)
        {
            if(i>=tmax) tmax=i;
            else tmax=tmax;
        }
    }
    for(i=1;i<tmax;i=i+2)
    {
        if(a[i]==1) cout<<i<<",";
    }
    cout<<tmax;
    return 0;
}

