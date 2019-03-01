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
    int n,s=0;
    cin>>n;
    s=3*(n%3==0)+5*(n%5==0)+7*(n%7==0);
    if(s==0)cout<<'n';
    if(s==3)cout<<3;
    if(s==5)cout<<5;
    if(s==7)cout<<7;
    if(s==8)cout<<"3 5";
    if(s==10)cout<<"3 7";
    if(s==12)cout<<"5 7";
    if(s==15)cout<<"3 5 7";
    return 0;
}
