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
    int a,b,t=0,m=0,n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
                     cin>>a;
                     cin>>b;
                     if(a>=90&&a<=140&&b>=60&&b<=90)
                     {
                                                    t++;
                                                    if(i==n&&t>=m)
                                                    m=t;
                     }
                     else
                     {
                         if(t>=m)
                         m=t;
                         t=0;
                     }
    }
    cout<<m<<endl;
    

    return 0;
}