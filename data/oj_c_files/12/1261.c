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
    int a[100000];
    int i,j,k;
    int m;
    int n;
    for(i=0;i<100000;i++)
    {
        cin>>a[i];
        if(a[i]==-1)
        break;
        if(a[i]==0)
        {
            n=0;
            for(j=0;j<i;j++)
            {
                for(k=0;k<i;k++)
                {
                    if(a[k]==0)
                    continue;
                    if(a[j]==2*a[k])
                    n=n+1;
                }
            }
            cout<<n<<endl;
            a[0]=0;
            i=0;
        }
    }
    return 0;
}
