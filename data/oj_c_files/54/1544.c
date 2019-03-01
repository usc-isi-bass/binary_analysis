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
	int n,k,m,i;
	int a[101]={0};
	cin>>n>>k;
	do
	{
		a[0]+=(n-1);
		for( i=1;i<=n;i++)
		{
			if(a[i-1]%(n-1)!=0)
				break;
			else
			a[i]=a[i-1]*n/(n-1)+k;

		}
	}
	while ((i-1)<n);
	cout<<a[n];
	return 0;
}
