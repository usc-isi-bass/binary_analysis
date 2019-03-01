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
    int n=0,t=0,i=0,j=0,k=0;
    int num[100];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>num[i];
    }
    for(k=1;k<=n;k++)
       for(j=1;j<=n-k;j++)
        {
            t=num[j];num[j]=num[j+1];num[j+1]=t;
        }
    for(i=1;i<n;i++)
    cout<<num[i]<<" ";
    cout<<num[n]<<endl;
    return 0;
}
