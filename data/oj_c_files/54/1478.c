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
    int n, k, i, t, j, app[100];
    cin>>n>>k;
    for(j=1;j<=n;j++)
    {
        app[j]=k;             
    }
    do
    {
        app[n]+=n;
        for(i=n-1;i>=1;i--)
        {
            if(app[i+1]%(n-1)!=0)
            {
                break;
            }
            else
            {
                app[i]=(app[i+1]*n)/(n-1)+k;             
            }             
        }       
    }while(i>=1);
    
        cout<<app[1];
    
    int x;cin>>x;
    return 0;
}
