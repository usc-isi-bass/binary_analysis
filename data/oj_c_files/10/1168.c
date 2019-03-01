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
int num=0,k=0,n,i,j,a[50],max=0,f[50]={0};
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{ 
for(j=1;j<=i;j++)
{
if(a[i]<=a[j]&&f[i]<f[j]) 
{
f[i]=f[j];
}
}
f[i]++;
if(max<f[i]) 
{
max=f[i];
}
}
printf("%d",max);
return 0;
}