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
int a[100][100],n,t,i,k=0,j,b,c,d,e;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]==0&&k==0)
{
b=i;
c=j;
k++;
}
}
}
for(i=n-1;i>=0;i--)
{
for(j=n-1;j>=0;j--)
{
if(a[i][j]==0&&k==1)
{
d=i;
e=j;
k++;
}
}
}
t=(d-b-1)*(e-c-1);
printf("%d\n",t);
return 0;
}

