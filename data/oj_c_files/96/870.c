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
    char a[110],c;
    int i,j,k,q=0,sum=0,ans1[110],ans2;
    while(c=getchar())
    {
       if(c=='\n')
       break;
       if(c!='\n')
       {
                  a[q]=c;
                  q++;
       }
    }
    for(i=0;i<q;i++)
    {
        sum=sum*10+a[i]-48;
        if(sum<13)
        ans1[i]=0;
        if(sum>=13)
        {
           ans1[i]=sum/13;
           sum=sum%13;
        }
    }
    for(i=0;i<q;i++)
    {
       if(ans1[i]!=0)
       {
           for(j=i;j<q;j++)
           cout<<ans1[j];
           cout<<endl;
           cout<<sum;
           break;
       }
       if(ans1[i]==0&&i==q-1)
       {
         cout<<"0"<<endl;
         cout<<sum;
       }
    }
    return 0;
    }
        