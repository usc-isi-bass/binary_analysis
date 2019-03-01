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

int fuck(int n,int m)
{
    int i,cnt=1;
    if(m>=sqrt(n))
    {return 1;}
        for(i=m;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                cnt+=fuck(n/i,i);     
            }   
                            
        }
        return cnt;
    
}
int main()
{
    int t, n, k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>n;
        cout<<fuck(n,2)<<endl;             
    }
    int x;cin>>x;
    return 0;
    
}
