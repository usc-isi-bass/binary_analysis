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
    int n,n0,nl;
    cin>>n0;
    n=n0;
    for(;n!=1;)
    {
        nl=n;
        if(n%2==1)
        {
            n=3*n+1;
            cout<<nl<<"*3+1="<<n<<endl;
        }
        else
        {
            n=n/2;
            cout<<nl<<"/2="<<n<<endl;
        }
    }
    cout<<"End";
    return 0;
}
