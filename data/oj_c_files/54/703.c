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
    int apple[1000]={0};
    int n,i,k;
    cin>>n>>k;
    apple[n]=k;
    do
    {
       apple[n]+=n;
       for(i=n;i>=1;i--)
       {
           if(apple[i]%(n-1)!=0)
           break;
           else
           {
              apple[i-1]=apple[i]*n/(n-1)+k; 
           }             
       }
    }while(i>1);
    cout<<apple[1]<<endl;
    return 0;
}
