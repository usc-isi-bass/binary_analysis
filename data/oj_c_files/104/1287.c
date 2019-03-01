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
    int a,b;
    cin>>a>>b;
    while(1)
    {
        while(a>b)
        {
            a=a/2;
        }
        while(b>a)
        {
            b=b/2;
        }
        if(a==b)  break;
    }
    cout<<a<<endl;
}
