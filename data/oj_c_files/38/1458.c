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
    int n,m;
    cin >> m;
    double a[102];
    double s=0,av=0;
    for(int k=0;k<m;k++)
    {
         cin >> n;
         s=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            s+=a[i];
        }
        av=s/n;
        s=0;
        for(int i=0;i<n;i++)
        {
            s+=(a[i]-av)*(a[i]-av);
        }
        cout << setprecision(5)<< fixed << sqrt(s/n)<<endl;

    }
   }
