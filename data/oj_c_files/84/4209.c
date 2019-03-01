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
    int n,a,max1,max2;
    cin>>n;
    cin>>max1>>a;
    if(max1<a)
    {
        max2=max1;
        max1=a;
    }
    else
    {
        max2=a;
    }
    for(int i=2;i<n;i++)
    {
        cin>>a;
        if(a>max1)
        {
            max2=max1;
            max1=a;
        }
        else if(a>max2)
        {
            max2=a;
        }
    }
    cout<<max1<<endl<<max2<<endl;
    return 0;
}
