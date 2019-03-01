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
    int i,j,m,t;
    long sum=0;
    for (i=1;i<=n;i++)
    {
        t=0;
        int k=((int)log(n))+1;
        if(i%7!=0)
        {
            for(j=0;j<k;j++)
            {
             if((i/(int)pow(10,j))%10==7)
             {
                t=1;
                break;
             }
             }
            if (t==0)
            sum+=i*i;
        }
    }
    cout<<sum;
    return 0;
}
