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
    int n;
    cin>>n;
    int a[1001]={0};
    a[1000]=1;
    int i,j;
    while(n--)
    {
        for(i=1000;i>0;i--)
            a[i]*=2;       //????????*2
         for(i=1000;i>0;i--)
        {
            if(a[i]>=10)      //????????????10???
            {
                a[i]-=10;
                a[i-1]+=1;
            }
        }
    }
    for(i=0;i<=1000;i++)
    {
        if(a[i]!=0)
        {
            for(j=i;j<=1000;j++)       //??
            cout<<a[j];
            break;
        }
    }
    return 0;
}
