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
    int a[21]={0,1,1};
    int N=0,n=0,i=0;
    cin>>N;
    for(i=3;i<=20;i++)
       a[i]=a[i-1]+a[i-2];
    for(i=1;i<=N;i++)
    {
       cin>>n;
       cout<<a[n]<<endl;
    }
    return 0;
}
