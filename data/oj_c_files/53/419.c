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

void main()
{
	int n,i,a[300],b[300]={0},m=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(a[i]==a[j]) b[j]=1;
	}
	for(i=n-1;i>=0;i--)
	{
		if(b[i]==0) break;
		else m=m+1;}
	for(i=0;i<n-m-1;i++)
	{
		if(b[i]==0) printf("%d,",a[i]);
	}
	printf("%d",a[n-m-1]);
}