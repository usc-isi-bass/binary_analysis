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
	cin>>n>>k;
	int a[1000]={0,k};
	while(1)
	{
		a[1]+=n;
		for(i=2;i<=n;i++)
		{
			if(a[i-1]%(n-1)!=0)
				break;
			a[i]=a[i-1]*n/(n-1)+k;
			if(i==n)
			{
				cout<<a[i];
				return 0;
			}
		}
	}
}