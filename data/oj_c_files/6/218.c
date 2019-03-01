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
    int n,m,q;
    int a[100][100];
    int sum=0;
    int (*p)[100]=a; //??a??????? 
    cin>>q;
    for(int i=0;i<q;i++)
    {
            sum=0; 
            cin>>m>>n;
            for(int j=0;j<m;j++)
               for(int k=0;k<n;k++)
                  cin>>a[j][k];
            for(int j=0;j<m;j++)
               for(int k=0;k<n;k++)          //?????? 
                  {
                       if(j==0||j==m-1) sum+=p[j][k];
                       else 
                       {
                            if(k==0||k==n-1) sum+=p[j][k];
                       }
                  }
            cout<<sum<<endl;
    }
    return 0;
}
