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
    int n,k,i,j=0,num,sum=0;
    cin>>n>>k;
    int a[n];
    for (i=0;i<n;i++)
        {
         cin>>a[i];
         a[j]=a[i];
         j++;
        }
    for (i=0;i<n;i++)
        {
         for (j=i+1;j<n;j++)
             {
              if (a[i]+a[j]==k)
                 num=1;
              else num=0;
              sum=sum+num;
             }
         }
    if (sum==0)
       cout<<"no"<<endl;
    else 
         cout<<"yes"<<endl;
    return 0;
}
