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

int fibbnacci(int x)
{
int a,b,c;
a=b=1;
if(x==1 || x==2) return a;
for(int i=3;i<=x;i++)
{c=b;b=a+b;a=c;
}
return b;
}
int main()
{
int a[15];
int n;cin>>n;
for(int i=0;i<n;i++)
{cin>>a[i];}

for(int j=0;j<n;j++)
{
cout<<fibbnacci(a[j])<<endl;}
return 0;
}

