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
    int a,n,i,sum,temp;
    int k[100];
    cin>>n;
    while(n>0)                      //????
    {    sum=0;
        cin>>a;
        if(a==0) cout<<60<<endl;
        for(i=0;i<a;i++)             //??
        cin>>k[i];
         if(k[a-1]+a*3<60)
         cout<<60-a*3<<endl;
         else {
             for(i=0;i<a;i++)                //????
             { if((k[i]+(i+1)*3)<60&&(k[i+1]+(i+2)*3>60))
             {    temp=60-(i+1)*3;
                 if(k[i+1]==temp-1)
                 cout<<temp-1<<endl;
                 else cout<<temp<<endl;
             }
             }
         }


     n--;
    }
    return 0;
}
