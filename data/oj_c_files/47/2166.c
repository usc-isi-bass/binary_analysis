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
	int n,i,p;//??????n,i,p
	cin>>n;//??n
	int a[n+1];//??????
	for(i=1;i<=n;i++)//??
	{
		cin>>a[i];//??a[i]
	}
	if(n%2==0)//?n???
	{
		for(i=1;i<=n/2;i++)//i?1????i<=n/2,??????
		{
			p=a[i];//?a[i]?a[n-i+1]??
			a[i]=a[n-i+1];
			a[n-i+1]=p;
		}
	}
	else//?n???
	{
		for(i=1;i<=(n-1)/2;i++)//i?1????i<=?n-1?/2,??????
		{
			p=a[i];//?a[i]?a[n-i+1]??
			a[i]=a[n-i+1];
			a[n-i+1]=p;
		}
	}
	for(i=1;i<=n;i++)//??
	{
		if(i==1)//?i=1
			cout<<a[i];//??a[i]
		else//??
			cout<<' '<<a[i];//???????a[i]
	}
	return 0;
}