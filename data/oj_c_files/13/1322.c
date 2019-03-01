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
	int n,i,j,a[20000],b=0,m=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   for(j=i+1;j<n;j++)
	   {
		   if(a[j]==a[i]) a[j]=0;
	   }
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0) m=m+1;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0) k=k+1;
		if(a[i]!=0&&k<m) printf("%d ",a[i]);
		if(a[i]!=0&&k==m) printf("%d",a[i]);
	}
}