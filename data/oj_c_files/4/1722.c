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
    int n,m;
    scanf ("%d %d", &n,&m);
    int s[100][100];
    int i,j;
    int k=0,l=0;
    for (i=0;i<=n-1;i++)
    {
        for (j=0;j<=m-1;j++)
        {
            scanf ("%d", &s[i][j]);
        }
    }
    for (i=0;i<=m-1;i++)
    {
         k=0;l=i;
         for (j=0;;j++)
         {
             printf ("%d\n", s[k][l]);
             if (l==0||k==n-1)
             {
                      break;
             }
             k=k+1;
             l=l-1;
         }
    }
    for (i=1;i<=n-1;i++)
    {
        k=i;l=m-1;
        for (j=0;;j++)
        {
            printf ("%d\n", s[k][l]);
            if (k==n-1||l==0)
            {
                       break;
            }
            k=k+1;
            l=l-1;
        }
    }
    
    return 0;
}
