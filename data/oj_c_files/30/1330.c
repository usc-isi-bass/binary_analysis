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
    int n,i,x,sum;
    sum=0;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        x=0;
        if (i%7==0) x=1;
        if (i%10==7) x=1;
        if (i/10==7) x=1;
        if (x==0) 
        {
           sum+=i*i;
          // cout<<i<<endl;
        }
    }
    cout<<sum;
    return 0;
}
