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
{int n,k;
int i,j;
int a[100000];
cin>>n;
for(i=0;i<100000;i++)
{a[100000]=0;}
for(i=0;i<n;i++)
{cin>>a[i];}
cin>>k;
for(i=0;i<n;i++)
{if(a[i]==k)
{for(j=i;j<n-1;j++)
{a[j]=a[j+1];}
i=i-1;
n=n-1;
}}
for(i=0;i<n-1;i++)
{cout<<a[i]<<" ";
                }
cout<<a[n-1];
return 0;
    }