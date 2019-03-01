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
    int m,n,i,j,o;
    scanf("%d",&m);
    scanf("%d",&n);
    o=0;
    int a[m+2][n+2];
    for(i=0;i<m+2;i++)
    {
                      for(j=0;j<n+2;j++)
                      {
                                        a[i][j]=-10;
                      }
    }
    for(i=1;i<=m;i++)
    {
                    for(j=1;j<=n;j++)
                    {
                                     scanf("%d",&a[i][j]);
                    }
    }
    for(i=1;i<=m;i++)
    {
                     for(j=1;j<=n;j++)
                     {
                                      if((a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i+1][j])&&(a[i][j]>=a[i][j+1]))
                                      {
                                                                                                                                if(o==0)
                                                                                                                                {
                                                                                                                                printf("%d %d\n",(i-1),(j-1));
                                                                                                                                o++;
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                printf("%d %d\n",(i-1),(j-1));
                                                                                                                                o++;
                                                                                                                                }
                                      }
                     }
   }
}