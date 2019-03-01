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
    int p,m,n,a[10];
    cin>>n;
    m=n;
    p=1;
    while(m/10!=0)
    {
        a[p-1]=m%10;
        m=m/10;
        p++;
        }
        a[p-1]=m;
        for(int j=0;j<p;j++)
        cout<<a[j];
        return 0;

    }
