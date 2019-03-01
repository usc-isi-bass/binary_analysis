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



void once(int a[1000])
{
    for(int i=0;i<=999;i++)
    a[i]*=2;

    for(int i=0;i<=999-1;i++)
    {
        if(a[i]>=10)
        {
            a[i+1]=a[i]/10+a[i+1];
            a[i]=a[i]%10;
        }
    }
}

int main()
{

    int a[1000]={0};
    a[0]=1;

    int n;
    cin>>n;

    for(;n>=1;n--)
    once(a);

    int end;
    for(int i=999;i>=0;i--)
    if(a[i]!=0){end=i;break;}

    for(int i=end;i>=0;i--)
    cout<<a[i];
    cout<<endl;
}
