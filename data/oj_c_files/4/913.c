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
    int a[110][110]={0};
    int m,n,i,j,k;
    cin>>m>>n;
    for(i=0;i<=m-1;i++)
    {
                     for(j=0;j<=n-1;j++)
                     {
                                      cin>>*(*(a+i)+j);
                     }
    }
    for(j=0;j<=n-1;j++)
    {
                      k=j;
                      for(i=0;i<=m-1;i++)
                      {
                                       cout<<*(*(a+i)+k)<<endl;
                                       k--;
                                       if(k<0) break;
                      }
    }
    for(i=1;i<=m-1;i++)
    {
                       j=n-1;
                       for(k=i;k<=m-1;k++)
                       {
                                          cout<<*(*(a+k)+j)<<endl;
                                          j--;
                                          if(j<0) break;
                       }
    }
    return 0;
}
   