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
    int j,i,n,mul[1000]={0},add[1000]={0};
    cin>>n;
    mul[0]=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<999;j++)
        {
            add[j+1]=0;
            mul[j]=mul[j]*2;
            if(mul[j]>=10)
            { add[j+1]=mul[j]/10;
              mul[j]=mul[j]%10;
            }

        }
        for(j=0;j<999;j++)
        {
            mul[j]=mul[j]+add[j];
        }
    }
    i=999;
    while(mul[i]==0) i--;
    for(;i>=0;i--)
    {
        cout<<mul[i];
    }
    return 0;
}
