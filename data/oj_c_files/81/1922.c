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



int a[6][6];
int n,m;

int main()
{
    for(int i=0;i<5;i++)
    {
            for(int j=0;j<5;j++)
            {
                    cin>>a[j][i];
            }
    }
    cin>>n>>m;
    int k=0;
    if(n>=0 && n<=4)
    {
            if(m>=0 && m<=4)
            k=1;
    }
    if(k)
    {
         for(int i=0;i<5;i++)
         {
                 int u;
                 if(i==n)
                 u=m;
                 else if(i==m)
                 u=n;
                 else
                 u=i;
                 for(int j=0;j<5;j++)
                 {
                                 if(j!=4)
                                 cout<<a[j][u]<<' ';
                                 else
                                 cout<<a[j][u]<<endl;
                 }
         }
    }
    else
    {
        cout<<"error"<<endl;
    }
    return 0;
}
