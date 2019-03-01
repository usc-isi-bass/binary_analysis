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
int n,a[6]={0,0,0,0,0,0},b[6]={100,50,20,10,5,1},i;
cin>>n;
for(i=0;i<=5;i++)
{
while(n>=0)
{
n=n-b[i];
a[i]++;
}
n=n+b[i];
a[i]=a[i]-1;
}
for(i=0;i<=5;i++)
{
cout<<a[i]<<endl;
}
return 0;
}