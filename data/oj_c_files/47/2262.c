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
    void f(int a);
    int n,num;
    cin>>n;
    cin>>num;
    f(n-1);
    cout<<num;
    return 0;
}
void f(int a)
{
     int num;
     cin>>num;
     if(a>0)
     {
     f(a-1);
     cout<<num<<" ";
     }
}
