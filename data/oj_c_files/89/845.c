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
    int n,i;
    cin>>n;
    int famous[n+1];
    for(i=0;i<n;i++)
   famous[i]=0;
    int a,b;
    while(1)
    {
        cin>>a>>b;
        if(a==0&&b==0)
        break;
        
        famous[b]++;
         
    }
    int m=0;
    for(i=1;i<n;i++)
    {
         if(famous[i]==n-1)
         {
         cout<<i;
         m++;                  
         }
    }
    if(m==0)
    cout<<0<<endl;
    return 0;
    
}
