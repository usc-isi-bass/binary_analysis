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
    int a[100],n,i,m1=0,m2=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
                     cin>>a[i];
                     if(a[i]>m1) 
                     {
                                 m2=m1; m1=a[i];
                                
                     }           
                     else if(m1>a[i]&&a[i]>m2) m2=a[i];
    }
    cout<<m1<<endl<<m2<<endl;
    return 0;
}
