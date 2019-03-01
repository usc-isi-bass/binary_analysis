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
    int guocheng(int n);
    int n;
    cin>>n;
    if(n==1) cout<<"End"<<endl;
    else
    {
        guocheng( n);
        cout<<"End"<<endl;
     }
    return 0;
}
 int guocheng(int n)
{
    int n1=0;
    while(n!=1)
    {
        if(n%2==0) 
        {
            n1=n/2;
            cout<<n<<"/2="<<n1<<endl;
            n=n1;
        }
        else
        {
            n1=3*n+1;
            cout<<n<<"*3+1="<<n1<<endl;
            n=n1;
        }
    }
}
