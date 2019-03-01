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
	int a[100001]={0};
	int k;
	int i,j,l=0,m=0;
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];
	cin>>k;
	for (i=1;i<=n;i++)
		if (a[i]==k)
			l++;
	for (i=1;i<=n-m;i++)
	{
		if (a[i]==k)
		{
			for (j=i;j<=n-1;j++)
			{
				a[j]=a[j+1];
			}
			i=i-1;
			m++;
		}
	}
	for (i=1;i<=n-l-1;i++)
		cout<<a[i]<<' ';
	cout<<a[n-l]<<endl;
	return 0;
}