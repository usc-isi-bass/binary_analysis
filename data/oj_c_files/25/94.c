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

int a[MAXN];
int n,i;
int main()
{
    cin>>n;
    a[0]=1;
    while(n--)
    {
        for(i=0;i<MAXN;i++)      
        a[i]*=2;
        for(i=0;i<MAXN-1;i++)
        {
            a[i+1]+=a[i]/10;
            a[i]%=10;   
        }
    }
    for(i=MAXN-1;i>0&&a[i]==0;i--);//????? ????????? 
    for(;i>=0;i--)
        cout<<a[i];
        cout<<endl;
     return 0;  
  
  
} 
