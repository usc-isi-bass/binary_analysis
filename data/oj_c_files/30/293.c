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
    int i,j=1,n;
    int a[100],s=0,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
                     while(i%10==7||i/10==7||i%7==0)
                     {
                             a[j]=i;
                             j++;
                             break;
                                                 }
                     }
    for(i=1;i<=n;i++)
    s=s+i*i;
    for(i=1;i<=j-1;i++)
    k=k+a[i]*a[i];
    cout<<s-k<<endl;
    return 0;
}
