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
    int n,t;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    cin>>a[i];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<a[1]<<endl<<a[2]<<endl;
    return 0;
}