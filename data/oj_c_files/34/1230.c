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
    int n;                              //???n
    cin>>n;
    int x;                              //??????x
    x=n;                                //???x 
    for (;x!=1;)                        //x??1???????? 
    {
        if (x%2==1)                     //???? 
        {
            cout<<x<<"*3+1=";
            x=x*3+1;
            cout<<x<<'\n';
        }
        else                            //???? 
        {
            cout<<x<<"/2=";
            x=x/2;
            cout<<x<<'\n';
        }
    }
    cout<<"End";                        //??
    return 0;                           //?> w <? 
}
