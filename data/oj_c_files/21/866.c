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
    int n,i,j,temp;
    cin>>n;
    double a[n];
    double dis[n],average,sum,temp0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    average=sum/n;
    for(i=0;i<n;i++)
    {
        dis[i]=abs(a[i]-average);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(dis[j]>dis[j+1])
            {
                temp0=dis[j];
                dis[j]=dis[j+1];
                dis[j+1]=temp0;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(dis[i]==dis[n-1])
        {
            cout<<a[i];
            i++;
            break;
        }
    }
    if(i<=n-1)
    {
        for(j=i;j<n;j++)
        {
            cout<<','<<a[j];
        }
    }
    return 0;
}