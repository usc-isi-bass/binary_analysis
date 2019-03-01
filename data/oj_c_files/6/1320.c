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


int k,m,n,a[100][100],i,j,sum=0;
int main()
{
    cin>>k;
    while(k>0)
    {
        k--;
        cin>>m>>n;
        for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];
        if(m==1||m==2||n==1||n==2)
        {
            for(i=1;i<=m;i++)
                for(j=1;j<=n;j++)
                sum+=a[i][j];
        }
        else
        {
            for(j=1;j<=n;j++)
            sum+=a[1][j];
            for(j=1;j<=n;j++)
            sum+=a[m][j];
            for(i=2;i<m;i++)
            sum+=a[i][1];
            for(i=2;i<m;i++)
            sum+=a[i][n];
        }
        cout<<sum<<endl;
        sum=0;
    }
}
