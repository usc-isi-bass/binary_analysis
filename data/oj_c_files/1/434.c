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

//n???????i?????????
int divi(int n,int i)
{
    int num=0;
    if(n%i==0)
    {
        if(n==i)      //?????????????????1 
        {
            return 1;
        }
        for(int j=2;j<=i;j++)
        {
             num=num+divi(n/i,j);   //?? 
        }
           return num;
    }
        
    else
    {
        return 0;
    }               
}

int main()
{
    int n=0;  //????? 
    int t=0;  //???? 
    int sum;  //????? 
    cin>>t;  
    for(int i=0;i<t;i++)
    {
        sum=0;
        cin>>n;
        for(int j=2;j<=n/2;j++)   //?????????1*n??? 
        {
            sum=sum+divi(n,j);
        }
        cout<<sum+1<<endl;
    }
    return 0;
}
