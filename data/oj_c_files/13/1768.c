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
    int a[12683],b[12683];
	int i,j,n,k;
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	{	scanf("%d",&a[i]);
	b[i]=1;
	}
for(j=n-1;j>=0;j--)
{
for(k=0;k<j;k++)
{
if(a[k]==a[j])
{b[j]=0;
break;}
else
b[j]=1;}}
printf("%d",a[0]);
for(j=1;j<=n-1;j++)
{if(b[j]==1)
{printf(" ");
printf("%d",a[j]);}}
return 0;
}

