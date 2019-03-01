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

//???? ??? 20121208

int s[111];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>*(s+i);
    }
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        cout<<*(s+n-i-1)<<' ';
        else
        cout<<*(s+n-i-1);
    }
    return 0;
}
