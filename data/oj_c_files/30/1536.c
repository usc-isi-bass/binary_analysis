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
    int a[1000];
    for(int i=1; i<=101; ++i)
        a[i]=0;
    int n;
    cin>>n;
    int t=0;
    for(int i=1; i<=n; ++i)
    {
        if((i%7)==0)
        a[i]=i;
        else
            if((i-7)%10==0)
            a[i]=i;
            else
                if(i>=70&&i<=79)
                a[i]=i;
    }
    int sum=0;
    int b=0;
    for(int i=1; i<=n; ++i)
        b=b+i*i;
    for(int i=1; i<=n; ++i)
    {
        sum=sum+a[i]*a[i];
    }
    cout<<b-sum;
    //while(1);
    return 0;
}
