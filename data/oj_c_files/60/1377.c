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


int f(int n)
{
    int i;
    if(n==2)
    return 1;
    if(n%2==0)
    return 0;
    else
    {
       for(i=3;i<1+sqrt(n);i=i+2)
    {
        if(n%i==0)
        break;
    }
    if(i>sqrt(n))
    return 1;
    else
    return 0;
    }
}

int main()
{
    int n;
    cin>>n;
    if(n<5)
    cout<<"empty"<<endl;
    else
    for(int i=3;i<n-1;i=i+2)
    {
        if(f(i)==1&&1==f(i+2))
        cout<<i<<" "<<i+2<<endl;
    }
    return 0;
}

