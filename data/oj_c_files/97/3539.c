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
    int money;
    cin>>money;
    int num[6]={0};

    while(money>=100)
    {
        money=money-100;
        num[0]=num[0]+1;
    }
    while(money>=50)
    {
        money=money-50;
        num[1]=num[1]+1;
    }
    while(money>=20)
    {
        money=money-20;
        num[2]=num[2]+1;
    }
    while(money>=10)
    {
        money=money-10;
        num[3]=num[3]+1;
    }
    while(money>=5)
    {
        money=money-5;
        num[4]=num[4]+1;
    }
    while(money>=1)
    {

        money=money-1;
        num[5]=num[5]+1;
    }
    int i;
    for(i=0;i<6;i++)
    {
        cout<<num[i]<<endl;
    }








    return 0;
}