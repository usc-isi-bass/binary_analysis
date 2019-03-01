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
	int n,a[60000],i,j;
	cin>>n;
	a[1]=1;
	for (i=2;i<=n;i++)
		a[i]=a[i-1]+1;
	for (i=2;i<=n;i++)
		if (a[i]!=0)
			for (j=2;j*i<=n;j++)
				a[j*i]=0;
	for (j=6;j<=n;j+=2)
		for (i=3;i<=j/2;i++)
			if (j==a[i]+a[j-i])
			{
				cout<<j<<"="<<a[i]<<"+"<<a[j-i]<<endl;
				break;
			}
	return 0;
}