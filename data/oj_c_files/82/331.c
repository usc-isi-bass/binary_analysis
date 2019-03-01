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

int panduan(int a,int b)
{
   if(a>=90&&a<=140&&b>=60&&b<=90)return 1;
   else return 0;
}
int main()
{
    int n,res,temp,a,b;
    res=0;
    temp=0;
    cin>>n;
    while(n--)
    {
       cin>>a>>b;
       if(panduan(a,b))temp+=1;
       else
       {
          if(temp>res)res=temp;
          temp=0;
       }
     }
     if(temp>res)res=temp;
     cout<<res<<endl;
return 0;
}