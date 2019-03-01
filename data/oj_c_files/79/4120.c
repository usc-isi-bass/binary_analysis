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
	int a[301]={0};
	int i,n,m;
	while(cin >>n >>m)
	{
		int t=1,count=0,x=0;
		if (m==0&&n==0) continue;
	for(i=1;i<=n;i++)
	   a[i]=i;
	while(count<=n-1)
	{
	for(i=1;i<=n;i++)
	{
		if(a[i]!=0)
		{
			if(t%m==0)
			{a[i]=0;
			x=i;
			count++;}
			t++;
		}
	}
	}
	cout <<x<<endl;
	}
	return 0;
}
