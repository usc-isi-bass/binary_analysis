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
int a[200][200];
int *p=a[0];
int m,n;
cin>>m>>n;
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
{
cin>>*(p+i*n+j);
}
for(int i=0;i<m+n-1;i++)
{
int flag=1;
int x=0;
int y=i;
while(flag==1)
{
if(y<n&&x>=0)cout<<*(p+x*n+y)<<endl;
x++;
y--;
if(y<0||x>m-1)flag=0;
}
}
}
