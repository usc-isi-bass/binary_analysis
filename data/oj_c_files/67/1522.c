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
    int n,i,a[100],b[100],q;
    double x,y;
    cin>>n;
    cin>>a[1]>>b[1];
    x=b[1]/(1.0*a[1]);
    for(i=2;i<=n;i++)
    {
                     cin>>a[i]>>b[i];
                     y=b[i]/(1.0*a[i]);
                     if(x-y>0.05)cout<<"worse"<<endl;
                     else if(y-x>0.05)cout<<"better"<<endl;
                     else cout<<"same"<<endl;
    }
    cin>>q;
    return 0;
}