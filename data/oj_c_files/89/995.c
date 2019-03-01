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
    int i=0,j,n,judge=0;
    cin>>n;
    int peo1[n],peo2[n];
    int countNum[n];
    for(i=0;i<n;i++)
    {
        countNum[i]=0;
    }
    while(1)
    {
        cin>>peo1[i]>>peo2[i];
        if(peo1[i]==0&&peo2[i]==0)  break;
        else    countNum[peo2[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(countNum[i]==n-1)
        {
            cout<<i<<endl;
            judge=1;
        }
    }
    if(judge==0) cout<<"NOT FOUND";
    return 0;
}
