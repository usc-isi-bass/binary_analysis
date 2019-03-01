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

/****************?????********************
??? 
*********************************************/
int pay(int n,int money)
{
    int num;
    num=n/money;
    cout<<num<<endl;
    num=n%money;
    return num;
}
int main()
{
    int n;
    cin>>n;//??????
    n=pay(n,100);
    n=pay(n,50);
    n=pay(n,20);
    n=pay(n,10);
    n=pay(n,5);
    n=pay(n,1);
    return 0;
}
     
