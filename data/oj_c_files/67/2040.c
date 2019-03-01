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
    int a,b,c;
    float m,n,r;
    cin>>a;
    cin>>m>>n;
    r=n/m;
    for(;a>1;a--)
    {
        cin>>m>>n;
        cout<<(n/m-r>0.05?"better":(r-n/m>0.05?"worse":"same"))<<endl;
    }
    return EXIT_SUCCESS;
}
