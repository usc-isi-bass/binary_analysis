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
	int n,k=0,a[200],b[200],i,j;
	int s[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(j=0;j<n;j++)
	{
	 for(i=j;i<n;i++)
	 {
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		{ k++;}
		else
		{  break;}
	 }
		s[j]=k;
		k=0;
	 }
	int x=0;
	for(i=0;i<n;i++)
	{
		if(s[i]>x)
		{  x=s[i];}
	}
	printf("%d",x);
	return 0;
}