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
	int i,j,n,a[1002],b[1002],sum=0,c[1002],max=0;
	char x;
	for(i=1;;i++)
	{
		cin >> a[i];
		sum++;
		x=cin.get();
		if(x!=',')break;
	}
	for(i=1;i<=sum;i++)
	{
		cin >> b[i];
		cin.get();
	}
	for(i=1;i<=sum;i++)
	{
		for(j=a[i];j<b[i];j++)
		{
			c[j]++;
		}
	}
	for(j=1;j<=1002;j++)
	{
		if(max<c[j])max=c[j];
	}
	cout<<sum<<" "<<max<<endl; 
	return 0;
}