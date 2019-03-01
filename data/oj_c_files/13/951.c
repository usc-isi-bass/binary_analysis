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
    int n,i,j,k,m=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];                               //????
    for(i=0;i<=n-m;i++)
    {
        for(j=i+1;j<=n-m;j++)
        {
            if(a[j]==a[i])
            {
                m=m+1;                           //??????
                for(k=j;k<=n-m;k++)              //??????????????????
                    a[k]=a[k+1];
                     j=j-1;
             }
        }
    }
    for(i=0;i<n-m-1;i++)
        cout<<a[i]<<" ";
    cout<<a[n-m-1]<<endl;                       //????
    return 0;
}