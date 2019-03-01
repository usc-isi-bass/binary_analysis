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
    int n,b3=0,b5=0,b7=0;
    cin>>n;
    if(n%3==0)
    {
    cout<<3;
    b3=1;
    }
    if(n%5==0)
    {
    if(b3!=0)
    cout<<' ';
    cout<<5;
    b5=1;
    }
    if(n%7==0)
    {
    if(b3!=0||b5!=0)
    cout<<' ';
    cout<<7;
    b7=1;
    }
    if(b3==0&&b5==0&&b7==0)
    cout<<'n';

}
