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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
    if(n==1)  cout<<a[0]<<endl;//???????
    else
        {
            cout<<a[n-1];//???????
            for(int i=n-2;i>=0;i--)
               {
                   cout<<" "<<a[i];//???????????????
               }
        }
        return 0;
}
