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
    void reverse(int num);
    int num,i;
    for(i=0;i<6;i++)
    {
        cin>>num;
        reverse(num);
    }
    return 0;
}

void reverse(int num0)
{
    int num1=0,n=1;
    while(num0/n!=0)
    {n=n*10;}
    for(int i=10;i<=n;i=i*10)
    {
        num1=num1+(num0%i)/(i/10)*(n/i);
        num0=num0-num0%i;
    }
    cout<<num1<<endl;
}
