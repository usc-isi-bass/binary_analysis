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
    void nixu(int num,int sign);
    int i,num,sign=0;
    for(i=0;i<6;i++)
    {
        cin>>num;
        nixu (num,sign);
        cout<<endl;
    }
    return 0;
}
void nixu(int num,int sign)
{
    int sum[10000],i=0,temp,j;
    if(num==0)
    cout<<0;
    else
    {
         if(num<0)
         {
             num=0-num;
             cout<<'-';
         }
         if(num%10!=0)
         sign=1;
         if(sign!=0)
         cout<<num%10;
         if(num/10!=0)
         {
             nixu (num/10,sign);
         }
    }

}