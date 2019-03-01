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
    int n,y,r,b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int c[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i,sum=0,q;
    cin>>n>>y>>r;
    if(n%400==0||(n%4==0&&n%100!=0))
    {
                                    for(i=1;i<=y-1;i++)
                                    sum=sum+b[i];
                                    sum=sum+r;
                                    cout<<sum;
    }
    else
    {
        for(i=1;i<=y-1;i++)
                                    sum=sum+c[i];
                                    sum=sum+r;
                                    cout<<sum;
    }
    cin>>q;
    return 0;
}
