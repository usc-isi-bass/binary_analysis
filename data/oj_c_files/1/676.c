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

int varieties=0,p;
int dfs(int dep,int last,int k)    //???????????k????? ?? 
{
    if (k == 1)              //??k=1 
    {
        varieties++;            //???+1 
        return 0;
    }
    for (int i = last; i <= k; i++)      
    if (k % i == 0)                    //??k??i????????????k=1 
    {
        dfs(dep+1,i,k/i);
    }
}
int main()
{
    int i,n,t;
    cin>>n;            //?????? 
    int m[n];          //????n???????? 
    for(i=0;i<n;i++)
    {
        cin>>t;            
        dfs(0,2,t);
        m[i]=varieties;
        varieties=0;
    }
    for(i=0;i<n;i++)
    cout<<m[i]<<endl;      //??????????? 
    return 0;
}