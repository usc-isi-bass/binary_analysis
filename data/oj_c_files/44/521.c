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
    int a;
    int reverse(int num);   //???? 
    for(int i=0;i<6;i++)
    {
       cin>>a;
       cout<<reverse(a)<<endl;
    }
    cin.get();
    return 0;
}
int reverse(int num)        //???????? 
{
    int b=0;
    if(num<0)
    {
       num*=-1;             //???????? 
       while(num>0) {b=10*b+num%10;num/=10;}
       b*=-1;
    }
    else if(num>0)
    {
       while(num>0) {b=10*b+num%10;num/=10;}
    }
    return b;
}
