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
	int n;
	cin>>n;
	int a[1000000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;
	int as=0,b=0,num=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			as=b;
			b=i;
			num=num+1;
			if(num!=1 && (b-as)!=1)
			{
				for(int p=as+1;p<b;p++)
			      a[p+1-num]=a[p];
			}
		}
	}
	if( b!=(n-1) )
	{
		for(int i=b+1;i<n;i++)
		a[i-num]=a[i];
	}
	cout<<a[0];
	for(int i=1;i<n-num;i++)
	{cout<<" "<<a[i];}
	return 0;
}
