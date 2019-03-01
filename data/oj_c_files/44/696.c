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

int f(int a);
int main()
{
    int x,j,c[6];
    for(j=1;j<=6;j++)
    {
    cin>>x;
    c[j]=f(x);
    }
    
    for(j=1;j<=6;j++)
    {
                     cout<<c[j]<<endl;
    }
    
    return 0;
}

int f(int a)
{
    int i,b=0,t;
    for(i=1;a!=0;i++)
    {
                     t=a%10;
                     b=b*10+t;
                     a=a/10;
    }
    return b;
}