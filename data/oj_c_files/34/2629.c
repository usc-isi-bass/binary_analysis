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
    int f(int n);
    int n;
    cin>>n;
    f(n);
    return 0;
}

int f(int n)
{
    if(n==1){cout<<"End";return 0;}  //n==1??
    if(n%2==1){cout<<n<<"*3+1="<<n*3+1<<endl;
               n=n*3+1;}
    else {cout<<n<<"/2="<<n/2<<endl;
          n=n/2;}
    f(n);   //????

}
