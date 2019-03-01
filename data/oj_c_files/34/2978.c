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


int n,m;
void jisuan()
{

 while(n!=1)
    {
        if(n%2!=0)
        {
            m=n*3+1;
            cout<<n<<"*3+1="<<m<<endl;
            n=m;
        }
        if(n%2==0)
        {
            m=n/2;
            cout<<n<<"/2="<<m<<endl;            //??????
            n=m;
        }
    }
}
int main()
{

    cin>>n;              //??n
    if(n==1)             //??n???1
    cout<<"End";
    if(n!=1)             //n??1?
    {
    jisuan();
    cout<<"End";                            //n=1???
    }
    return 0;
}
