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

//??????
int main()
{
    int i=0;
    int a[10000];
    a[0]=1;
    a[1]=1;
    for(i=2;i<10000;i++)
    {
        a[i]=0;
    }
    for(i=2;i<10000;i++)
    {
        a[i]=a[i-1]+a[i-2];
    } 
    int n=0;
    cin>>n;
    int b[10000];               //????????????????? 
    for(i=0;i<10000;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[b[i]-1]<<endl;
    }
    return 0;
} 
