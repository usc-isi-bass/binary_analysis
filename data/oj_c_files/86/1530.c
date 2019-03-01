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
    cin >>n;
    for (int j=1;j<=n;j++)
    {
        int m;
        int ans=60;
        int a[30];
        cin >>m;
        for (int i=1;i<=m;i++)
            cin >>a[i];
        for (int i=1;i<=m;i++)
        {
            if (a[i]+3*(i-1)>=60)
                break;
            if (a[i]+3*i>=60)
            {
                ans=a[i];
                break;
            }
            ans=ans-3;
        }
        cout <<ans<<endl;
    }
    return 0;
}
