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
    int x,a[5],i,j,b[5],c,d,k;
    cin>>x;
    if (x==0)
        cout<<x;
    else
    {
        a[1]=x/10000;
        a[2]=(x%10000)/1000;
        a[3]=(x%1000)/100;
        a[4]=(x%100)/10;
        a[5]=(x%10);
        for (i=1;; i++)
        {
            if (a[i]!=0)
                break;
        }
        c=i;
        for (i=5; i>=c; i--)
            cout<<a[i];
    }
    return 0;
}
