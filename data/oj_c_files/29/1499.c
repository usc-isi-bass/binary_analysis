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


int main(int argc, char *argv[])
{
    double x;
    int n,s,f[100]={1,2};
    for(s=2;s<100;s++)
    f[s]=f[s-1]+f[s-2];
    cin>>n;
    for(;n>0;n--)
    {
        x=0;
        cin>>s;
        for(;s>0;s--)
        {
            x=x+(double)f[s]/(double)f[s-1];
        }
        cout<<fixed<<setprecision(3)<<x<<endl;
    }
    return EXIT_SUCCESS;
}
