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
    int n,k;
    cin>>n>>k;
    int i,f[n+2];        //?f[i]????i???????? 
    f[n+1]=1;           //?????????1??? 
    while(1)
    {
        f[n]=n*f[n+1]+k;
        for(i=n-1;i>0;i--)
        {
            if(f[i+1]%(n-1)!=0)    //????????f[i]?????n-1?? 
            {
                break;
            }
            f[i]=(f[i+1]*n)/(n-1)+k;       //??? 
            
        }
        if(i==0) break;          //??i=0,???? 
        else f[n+1]++;          //??????,???f[n+1]+1????? 
    }
    cout<<f[1];              //???n+1??????0????????????1????????????   
    return 0;
}