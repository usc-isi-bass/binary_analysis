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
	int n,i,a[100001],k,b=0;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cin>>k;
	b=n;
	for(i=n;i>=1;i--)
	{
		if(a[i]==k)b--;
		if(a[i]!=k)break;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]!=k)
		{
			if(i<b)cout<<a[i]<<' ';
			else cout<<a[i];
		}
	}
	return 0;
}