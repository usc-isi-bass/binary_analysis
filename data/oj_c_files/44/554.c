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

//?????   
//?? 
//????????????????????????
//?????1576???????6751??????1230?
//???321??main???????????????? 
//???? 
//??6??? 
//???? 
//?????????6? 
int flag = 0;
int function(int n);
int main()
{
    int i=0;
    for(i=0;i<6;i++)
    {
     int  n=0;
     cin>>n;
     if (n<0)
     {
             cout<<"-";
             n=(-1)*n;
     }
     flag = 0;
     function(n);
     cout<<endl;
    }
    return 0;
}
int function(int n)
{
    if (n>0)
    {
       if ((n%10)!=0)
       {cout<<(n%10);flag=1;}
       else if ((n%10==0)&&(flag!=0))
       cout<<"0";
       function(n/10);
    }
    return 0;
}
