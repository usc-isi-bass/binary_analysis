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
    int n;
    int a[1100][1100];
    cin >>n;
    int ans=0;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cin >>a[i][j];
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (a[i][j]==0)
                continue;
            else
            {
                int f=0; 
                for (int k=i+1;k<=n;k++)
                {
                    if (a[k][j]==0&&a[k][j+1]==0)
                    f++; 
                }
                if (f%2==1)
                    ans++;
            }
        }
    }
    cout <<ans;
    return 0;
} 
