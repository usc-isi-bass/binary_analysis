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

int num=0;
void f(int k,int n)
{
    int i,flag=0;
    for(i=k;i<=n;i++)
    {
        if(n%i==0)
        {
            f(i,n/i);
            flag=1;
        }
    }
    if((flag==0&&k<=n)||n==1)
    num++;
}
int main()
{
    int i,n,m;
    cin>>m;
    for(i=1;i<=m;i++)
    {
       cin>> n;
       f(2,n);
       cout<<num<<endl;
       num=0;
    }

    return 0;
}
