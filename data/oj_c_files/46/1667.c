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

int main( )
{
int m,n,t;
cin>>m>>n;
int a[m][n];
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
if(m<=n)
t=m;
else t=n;
for(int i=0;i<t/2;i++)
{
for(int j=i;j<n-i;j++)
{
cout<<a[i][j]<<endl;
}
for(int j=i+1;j<m-i;j++)
{
cout<<a[j][n-i-1]<<endl;
}
for(int j=i+1;j<n-i;j++)
{
cout<<a[m-1-i][n-1-j]<<endl;
}
for(int j=i+1;j<m-i-1;j++)
{
cout<<a[m-1-j][i]<<endl;
}
}
if(m<=n&&m%2==1)
{
for(int j=(m-1)/2;j<n-(m-1)/2;j++)
cout<<a[(m-1)/2][j]<<endl;
}
if(m>n&&n%2==1)
for(int j=(n-1)/2;j<m-(n-1)/2;j++)
cout<<a[j][(n-1)/2]<<endl;
return 0;
}
