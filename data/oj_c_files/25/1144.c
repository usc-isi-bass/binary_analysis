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

int a[100]={1};
void multiplus(int a[])
{
     int b[100]={0};
     for(int i=0;i<100;i++)
     {
            if(a[i]*2+b[i]>=10) b[i+1]=1; 
            a[i]=(a[i]*2+b[i])%10;
     }
}
int main()
{
    int n,i,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
           multiplus(a);         
    }
    for(i=99;i>=0;i--)
    {
          if(a[i]!=0) 
          {
             k=i;
             break;
          }             
    }
    for(i=k;i>=0;i--) cout<<a[i];
    return 0;
}
