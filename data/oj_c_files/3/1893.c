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
    int n,k;//??????n(n<1000)?????????????????????k?
    cin>>n>>k;//??
    int a[n];
    int i,j;//??
    int yes=0;//?????? 
    for(i=0;i<n;i++)
    {
                    cin>>a[i];
    }//??n???
    for(i=0;i<n;i++)
    {
                    for(j=i+1;j<n;j++)
                    {
                                      if(a[i]+a[j]==k)
                                      {
                                                       yes=1;
                                      }
                    }
    }
    if(yes==0)
    {
              cout<<"no";
    }//??????????k???no 
    if(yes==1)
    {
              cout<<"yes";
    }//??????????k???yes
    return 0;
} 
