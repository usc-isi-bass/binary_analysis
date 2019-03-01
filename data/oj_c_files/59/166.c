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

int main ()
{
    char c[200][200];
    int x[20000],y[20000];
    int n,m;
    cin>>n;
    int k=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin>>c[i][j];
    cin>>m;
    for (int q=1;q<m;q++)
    {
        k=0;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (c[i][j]=='@')
                {
                    x[k]=i;
                    y[k]=j;
                    k++;
                }
            }
        }
        for (int i=0;i<k;i++)
        {
            if(c[x[i]-1][y[i]]=='.'&&x[i]>0)
            c[x[i]-1][y[i]]='@';
            if(c[x[i]+1][y[i]]=='.'&&x[i]<n-1)
            c[x[i]+1][y[i]]='@';
            if(c[x[i]][y[i]-1]=='.'&&y[i]>0)
            c[x[i]][y[i]-1]='@';
            if(c[x[i]][y[i]+1]=='.'&&y[i]<n-1)
            c[x[i]][y[i]+1]='@';
        }
        
    }
    k=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            if (c[i][j]=='@')
                k++;
    cout <<k<<endl;
}
