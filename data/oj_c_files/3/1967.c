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
    int n,k,t=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int ia=0,ib=1;ia<n-1;ia++)
    {
        for(ib=ia+1;ib<n;ib++)
        {
            if(a[ia]+a[ib]==k)
            {
                cout<<"yes";
                t=1;                     //t????????t=1???????“yes”
                break;                   //???“yes”???????
            }
        }
        if(t==1)break;                 //?????????????????t???
    }
    if(t==0)cout<<"no";                  //??????????t?0????????“yes”????“no”
    return 0;
}
