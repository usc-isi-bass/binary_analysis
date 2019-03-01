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
    int i,n,t,len,ans[100];
    cin >> n;
    len=1;ans[0]=1; // ???
    while (n--)
    {
        t=0; // ??
        for (i=0;i<len;i++)
        {
            ans[i]=ans[i]*2+t; // ??+??
            t=ans[i]/10; // ??
            ans[i]%=10;
        }
        if (t>0) ans[len++]=t; // ????
    }
    for (i=len-1;i>=0;i--)
        cout << ans[i]; // ??
    cout << endl;
    return 0;
}
