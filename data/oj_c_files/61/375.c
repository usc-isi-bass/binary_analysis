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
int a[101],i,j,k;
a[1]=1;
a[2]=1;
for(i=3;i<=100;i++)
{
a[i]=a[i-1]+a[i-2];
}
int n;
cin>>n;
for(j=1;j<=n;j++)
{
cin>>k;
cout<<a[k]<<endl;
}
return 0;
}