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

int sum=0;
void recur(int N,int i)
{
    if(N==1) sum++;
    while(i<=N)
    {
        if(N%i==0) 
			recur(N/i,i);
        i++;
    }
    return ;
}
int main()
{
    int t=0;
    cin>>t;
    for(int k = 0; k < t; k++)
    {
        int n=0;
        cin>>n;
        int i=2,res=1;
        for(int i =2; i <=n/2;i++)
        {
            if(n%i==0)
            {
                sum=0;
                recur(n/i,i);
                res+=sum;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
