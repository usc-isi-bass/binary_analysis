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
    int a[20];
    a[1]=a[2]=1;
    int i;
    for(i=3;i<=20;i++)
    {
    a[i]=a[i-1]+a[i-2];
    }
    int n;
    cin>>n;
    int b[n];
    for(i=1;i<=n;i++)
    {
    cin>>b[i];
    }
    for(i=1;i<=n;i++)
    {
    cout<<a[b[i]]<<endl;
    }
}
